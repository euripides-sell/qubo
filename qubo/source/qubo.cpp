/*  ===================================================================================*/
    #include <iostream>
/*  ===================================================================================*/
    #include "qubo.hpp"
    #include "util_serial_loop.hpp"
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    qb::qubo::qubo() {
/*  .....................................................................................
 
    Description:
        <Say what this function does>
 
    Code description:
                Language: C++.
    Software standards: <Software standards line 1>
                        <Software standards line 2>
    ...................................................................................*/
/*  Declarations:                                                                      */
/*  Local parameters:                                                                  */
/*  Local scalars:                                                                     */
/*  Local arrays:                                                                      */
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
        n_ = 0;
        mat_ = 0;
        xol_ = 0;
        find_min_ = true;
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    qb::qubo::~qubo() {
/*  .....................................................................................
 
    Description:
        <Say what this function does>
 
    Code description:
                Language: C++.
    Software standards: <Software standards line 1>
                        <Software standards line 2>
    ...................................................................................*/
/*  Declarations:                                                                      */
/*  Local parameters:                                                                  */
/*  Local scalars:                                                                     */
/*  Local arrays:                                                                      */
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
        n_ = 0;
        if (mat_) {delete [] mat_; mat_ = 0;}
        if (xol_) {delete [] xol_; xol_ = 0;}
        find_min_ = true;
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    void qb::qubo::allocate_mat() {
/*  .....................................................................................
 
    Description:
        <Say what this function does>
 
    Code description:
                Language: C++.
    Software standards: <Software standards line 1>
                        <Software standards line 2>
    ...................................................................................*/
/*  Declarations:                                                                      */
/*  Local parameters:                                                                  */
/*  Local scalars:                                                                     */
        int i;
//          PURPOSE: 
/*  Local arrays:                                                                      */
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
        if (!n_) throw;
        mat_ = new float[n_ * n_];
        for (i=0;i!=n_ * n_;i++) mat_[ i ] = 0.0;
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    void qb::qubo::build_symmetric() {
/*  .....................................................................................
 
    Description:
        <Say what this function does>
 
    Code description:
                Language: C++.
    Software standards: <Software standards line 1>
                        <Software standards line 2>
    ...................................................................................*/
/*  Declarations:                                                                      */
/*  Local parameters:                                                                  */
/*  Local scalars:                                                                     */
        int i, j;
//          PURPOSE: 
/*  Local arrays:                                                                      */
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
        if (!n_) throw;
        for (i=0;i!=n_;i++) {
            for (j=0;j!=i;j++) {
                mat_[i * n_ + j] = mat_[j * n_ + i];
            }
        }
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    void qb::qubo::solve() {
/*  .....................................................................................
 
    Description:
        <Say what this function does>
 
    Code description:
                Language: C++.
    Software standards: <Software standards line 1>
                        <Software standards line 2>
    ...................................................................................*/
/*  Declarations:                                                                      */
/*  Local parameters:                                                                  */
        const int TWO = 2;
//          PURPOSE: 
/*  Local scalars:                                                                     */
        int i0, i1, i2, i3, i, j;
//          PURPOSE: 
        float xp;
//          PURPOSE: 
        bool init;
//          PURPOSE: 
/*  Local arrays:                                                                      */
        float *x = 0, *xb = 0;
//          PURPOSE: 
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
        x = new float[n_];
        xb = new float[ n_ ];
        xol_ = new float[ n_ ];
        mvl_ = 0.0;
        init = false;
        for (i0=0;i0!=TWO;i0++) {
            x[ 0 ] = (i0 == 0) ? 0.0 : 1.0;
            for (i1=0;i1!=TWO;i1++) {
                x[ 1 ] = (i1 == 0) ? 0.0 : 1.0;
                for (i2=0;i2!=TWO;i2++) {
                    x[ 2 ] = (i2 == 0) ? 0.0 : 1.0;
                    for (i3=0;i3!=TWO;i3++) {
                        x[ 3 ] = (i3 == 0) ? 0.0 : 1.0;
//                      internal product
                        for (i=0;i!=n_;i++) xb[ i ] = 0;
                        for (i=0;i!=n_;i++) {
                            for (j=0;j!=n_;j++) {
                                xb[ i ] += mat_[i * n_ + j] * x[ j ];
                            } // j
                        } // i
                        xp = 0.0;
                        for (i=0;i!=n_;i++) xp += xb[ i ] * x[ i ];
                        if (!init) {
                            mvl_ = xp;
                            for (i=0;i!=n_;i++) xol_[ i ] = x[ i ];
                            init = true;
                        } else { // !init
                            if ((find_min_ && xp < mvl_) || (!find_min_ && xp > mvl_)) {
                                mvl_ = xp;
                                for (i=0;i!=n_;i++) xol_[ i ] = x[ i ];
                            }
                        } // !init
                    } // i3
                } // i2
            } // i1
        } // i0
        delete [] x; x = 0;
        delete [] xb; xb = 0;
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    void qb::qubo::solve_serial_loop() {
/*  .....................................................................................
 
    Description:
        <Say what this function does>
 
    Code description:
                Language: C++.
    Software standards: <Software standards line 1>
                        <Software standards line 2>
    ...................................................................................*/
/*  Declarations:                                                                      */
/*  Local parameters:                                                                  */
        const int TWO = 2;
//          PURPOSE: 
/*  Local scalars:                                                                     */
        int k, i, j, total;
//          PURPOSE: 
        float xp;
//          PURPOSE: 
        bool init;
//          PURPOSE: 
/*  Local arrays:                                                                      */
        int *n = 0, *indeces;
//          PURPOSE: 
        float *x = 0, *xb = 0;
//          PURPOSE: 
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
        n = new int[ n_ ];
        for (i=0;i!=n_;i++) n[ i ] = TWO;
        indeces = new int [n_];
        total = 1;
        for (i=0;i!=n_;i++) total *= n[ i ];
        x = new float[ n_ ];
        xb = new float[ n_ ];
        xol_ = new float[ n_ ];
        init = false;
        for (k=0;k!=total;k++) {
            util_serial_loop_index(n_, n, k, indeces);
            for (j=0;j!=n_;j++) {
                x[ j ] = indeces[ j ] == 0 ? 0.0 : 1.0;
            }
//          internal product
            for (i=0;i!=n_;i++) xb[ i ] = 0;
            for (i=0;i!=n_;i++) {
                for (j=0;j!=n_;j++) {
                    xb[ i ] += mat_[i * n_ + j] * x[ j ];
                } // j
            } // i
            xp = 0.0;
            for (i=0;i!=n_;i++) xp += xb[ i ] * x[ i ];
            if (!init) {
                mvl_ = xp;
                for (i=0;i!=n_;i++) xol_[ i ] = x[ i ];
                init = true;
            } else { // !init
                if ((find_min_ && xp < mvl_) || (!find_min_ && xp > mvl_)) {
                    mvl_ = xp;
                    for (i=0;i!=n_;i++) xol_[ i ] = x[ i ];
                }
            } // !init
        } // k
        if (n) {delete [] n; n = 0;}
        if (x) {delete [] x; x = 0;}
        if (xb) {delete [] xb; xb = 0;}
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    static void func() {
/*  .....................................................................................
 
    Description:
        <Say what this function does>
 
    Code description:
                Language: C++.
    Software standards: <Software standards line 1>
                        <Software standards line 2>
    ...................................................................................*/
/*  Declarations:                                                                      */
/*  Local parameters:                                                                  */
/*  Local scalars:                                                                     */
/*  Local arrays:                                                                      */
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  ===================================================================================*/
