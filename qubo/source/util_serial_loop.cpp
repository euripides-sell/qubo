/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    void util_serial_loop_index(const int nloop, const int *n, const int index, int *indeces) {
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
        int i, ni, k;
//          PURPOSE: 
/*  Local arrays:                                                                      */
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
        ni = 1;
        for (i=0;i!=nloop;i++) {
            k = nloop - i - 1;
            indeces[ k ] = (index / ni)  % n[ k ];
            ni *= n[ k ];
        }
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    static void func2() {
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
