/*  ===================================================================================*/
    #include <iostream>
/*  ===================================================================================*/
    #include "qubo.hpp"
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    static void test_1() {
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
        qb::qubo wqb;
//          PURPOSE: Working cubo
/*  Local arrays:                                                                      */
        const float *s = 0;
//          PURPOSE: solution
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
        std::cout<<"test 1, page 6 (find min), ";
        wqb.n_ = 4;
        wqb.allocate_mat();
        wqb.entry_mat(0, 0) = -5;
        wqb.entry_mat(0, 1) = 2;
        wqb.entry_mat(0, 2) = 4;
        wqb.entry_mat(1, 1) = -3;
        wqb.entry_mat(1, 2) = 1;
        wqb.entry_mat(2, 2) = -8;
        wqb.entry_mat(2, 3) = 5;
        wqb.entry_mat(3, 3) = -6;
        wqb.build_symmetric();
//
        wqb.solve_serial_loop();
        s = wqb.get_solution();
        std::cout<<"solution :: ";
        for (i=0;i!=wqb.n_;i++) {
            std::cout<<" "<<s[ i ];
        }
        std::cout<<", ";
        std::cout<<"min "<<wqb.opt_value()<<"\n";
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    static void test_2() {
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
        qb::qubo wqb;
//          PURPOSE: Working cubo
/*  Local arrays:                                                                      */
        const float *s = 0;
//          PURPOSE: solution
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
        std::cout<<"test 2, page 7 (find min), ";
        wqb.n_ = 8;
        wqb.allocate_mat();
        wqb.entry_mat(0, 0) = -3525;
        wqb.entry_mat(0, 1) = 175;
        wqb.entry_mat(0, 2) = 325;
        wqb.entry_mat(0, 3) = 775;
        wqb.entry_mat(0, 4) = 1050;
        wqb.entry_mat(0, 5) = 425;
        wqb.entry_mat(0, 6) = 525;
        wqb.entry_mat(0, 7) = 250;
        wqb.entry_mat(1, 1) = -1113;
        wqb.entry_mat(1, 2) = 91;
        wqb.entry_mat(1, 3) = 217;
        wqb.entry_mat(1, 4) = 294;
        wqb.entry_mat(1, 5) = 119;
        wqb.entry_mat(1, 6) = 147;
        wqb.entry_mat(1, 7) = 70;
        wqb.entry_mat(2, 2) = -1989;
        wqb.entry_mat(2, 3) = 403;
        wqb.entry_mat(2, 4) = 546;
        wqb.entry_mat(2, 5) = 221;
        wqb.entry_mat(2, 6) = 273;
        wqb.entry_mat(2, 7) = 130;
        wqb.entry_mat(3, 3) = -4185;
        wqb.entry_mat(3, 4) = 1302;
        wqb.entry_mat(3, 5) = 527;
        wqb.entry_mat(3, 6) = 651;
        wqb.entry_mat(3, 7) = 310;
        wqb.entry_mat(4, 4) = -5208;
        wqb.entry_mat(4, 5) = 714;
        wqb.entry_mat(4, 6) = 882;
        wqb.entry_mat(4, 7) = 420;
        wqb.entry_mat(5, 5) = -2533;
        wqb.entry_mat(5, 6) = 357;
        wqb.entry_mat(5, 7) = 170;
        wqb.entry_mat(6, 6) = -3045;
        wqb.entry_mat(6, 7) = 210;
        wqb.entry_mat(7, 7) = -1560;

        wqb.build_symmetric();
//
        wqb.solve_serial_loop();
        s = wqb.get_solution();
        std::cout<<"solution :: ";
        for (i=0;i!=wqb.n_;i++) {
            std::cout<<" "<<s[ i ];
        }
        std::cout<<", ";
        std::cout<<"min "<<wqb.opt_value()<<"\n";
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    static void test_3() {
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
        qb::qubo wqb;
//          PURPOSE: Working cubo
/*  Local arrays:                                                                      */
        const float *s = 0;
//          PURPOSE: solution
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
        std::cout<<"test 3, page 9 (find max), ";
        wqb.find_max();
        wqb.n_ = 5;
        wqb.allocate_mat();
        wqb.entry_mat(0, 0) = 2;
        wqb.entry_mat(0, 1) = -1;
        wqb.entry_mat(0, 2) = -1;
//
        wqb.entry_mat(1, 1) = 2;
        wqb.entry_mat(1, 3) = -1;
//
        wqb.entry_mat(2, 2) = 3;
        wqb.entry_mat(2, 3) = -1;
        wqb.entry_mat(2, 4) = -1;
//
        wqb.entry_mat(3, 3) = 3;
        wqb.entry_mat(3, 4) = -1;
//
        wqb.entry_mat(4, 4) = 2;
//
        wqb.build_symmetric();
//
        wqb.solve_serial_loop();
        s = wqb.get_solution();
        std::cout<<"solution :: ";
        for (i=0;i!=wqb.n_;i++) {
            std::cout<<" "<<s[ i ];
        }
        std::cout<<", ";
        std::cout<<"max "<<wqb.opt_value()<<"\n";
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    static void test_4() {
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
        qb::qubo wqb;
//          PURPOSE: Working cubo
/*  Local arrays:                                                                      */
        const float *s = 0;
//          PURPOSE: solution
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
        std::cout<<"test 4, page 13 (find min), ";
        wqb.n_ = 5;
        wqb.allocate_mat();
        wqb.entry_mat(0, 0) = -15;
        wqb.entry_mat(0, 1) = 4;
        wqb.entry_mat(0, 2) = 4;
//
        wqb.entry_mat(1, 1) = -15;
        wqb.entry_mat(1, 3) = 4;
//
        wqb.entry_mat(2, 2) = -23;
        wqb.entry_mat(2, 3) = 4;
        wqb.entry_mat(2, 4) = 4;
//
        wqb.entry_mat(3, 3) = -23;
        wqb.entry_mat(3, 4) = 4;
//
        wqb.entry_mat(4, 4) = -15;
//
        wqb.build_symmetric();
//
        wqb.solve_serial_loop();
        s = wqb.get_solution();
        std::cout<<"solution :: ";
        for (i=0;i!=wqb.n_;i++) {
            std::cout<<" "<<s[ i ];
        }
        std::cout<<", ";
        std::cout<<"min "<<wqb.opt_value()<<"\n";
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    static void test_5() {
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
        qb::qubo wqb;
//          PURPOSE: Working cubo
/*  Local arrays:                                                                      */
        const float *s = 0;
//          PURPOSE: solution
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
        std::cout<<"test 5, page 14 (find max), ";
        wqb.find_max();
        wqb.n_ = 4;
        wqb.allocate_mat();
        wqb.entry_mat(0, 0) = 1;
        wqb.entry_mat(0, 1) = -3;
        wqb.entry_mat(0, 2) = -3;
        wqb.entry_mat(0, 3) = -3;
//
        wqb.entry_mat(1, 1) = 1;
//
        wqb.entry_mat(2, 2) = 1;
        wqb.entry_mat(2, 3) = -3;
//
        wqb.entry_mat(3, 3) = 1;
//
        wqb.build_symmetric();
//
        wqb.solve_serial_loop();
        s = wqb.get_solution();
        std::cout<<"solution :: ";
        for (i=0;i!=wqb.n_;i++) {
            std::cout<<" "<<s[ i ];
        }
        std::cout<<", ";
        std::cout<<"max "<<wqb.opt_value()<<" (multiple solutions)\n";
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    static void test_6() {
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
        qb::qubo wqb;
//          PURPOSE: Working cubo
/*  Local arrays:                                                                      */
        const float *s = 0;
//          PURPOSE: solution
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
        std::cout<<"test 6, page 16 (find min), ";
        wqb.n_ = 4;
        wqb.allocate_mat();
        wqb.entry_mat(0, 0) = 1;
//
        wqb.entry_mat(1, 1) = 0;
        wqb.entry_mat(1, 2) = -1/2;
        wqb.entry_mat(1, 3) = -1/2;
//
        wqb.entry_mat(2, 2) = 0;
        wqb.entry_mat(2, 3) = 1;
//
        wqb.entry_mat(3, 3) = -2;
//
        wqb.build_symmetric();
//
        wqb.solve_serial_loop();
        s = wqb.get_solution();
        std::cout<<"solution :: ";
        for (i=0;i!=wqb.n_;i++) {
            std::cout<<" "<<s[ i ];
        }
        std::cout<<", ";
        std::cout<<"min "<<wqb.opt_value()<<"\n";
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    static void test_7() {
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
        qb::qubo wqb;
//          PURPOSE: Working cubo
/*  Local arrays:                                                                      */
        const float *s = 0;
//          PURPOSE: solution
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
        std::cout<<"test 7, page 20 (find min), ";
        wqb.n_ = 6;
        wqb.allocate_mat();
        wqb.entry_mat(0, 0) = -17;
        wqb.entry_mat(0, 1) = 10;
        wqb.entry_mat(0, 2) = 10;
        wqb.entry_mat(0, 3) = 10;
        wqb.entry_mat(0, 5) = 20;
//
        wqb.entry_mat(1, 1) = -18;
        wqb.entry_mat(1, 2) = 10;
        wqb.entry_mat(1, 3) = 10;
        wqb.entry_mat(1, 4) = 10;
        wqb.entry_mat(1, 5) = 20;
//
        wqb.entry_mat(2, 2) = -29;
        wqb.entry_mat(2, 3) = 10;
        wqb.entry_mat(2, 4) = 20;
        wqb.entry_mat(2, 5) = 20;
//
        wqb.entry_mat(3, 3) = -19;
        wqb.entry_mat(3, 4) = 10;
        wqb.entry_mat(3, 5) = 10;
//
        wqb.entry_mat(4, 4) = -17;
        wqb.entry_mat(4, 5) = 10;
//
        wqb.entry_mat(5, 5) = -28;
//
        wqb.build_symmetric();
//
        wqb.solve_serial_loop();
        s = wqb.get_solution();
        std::cout<<"solution :: ";
        for (i=0;i!=wqb.n_;i++) {
            std::cout<<" "<<s[ i ];
        }
        std::cout<<", ";
        std::cout<<"min "<<wqb.opt_value()<<"\n";
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    static void test_8() {
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
        qb::qubo wqb;
//          PURPOSE: Working cubo
/*  Local arrays:                                                                      */
        const float *s = 0;
//          PURPOSE: solution
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
        std::cout<<"test 8, page 24 (find min), ";
        wqb.n_ = 15;
        wqb.allocate_mat();
        wqb.entry_mat(0, 0)  = -4;
        wqb.entry_mat(0, 1)  = 4;
        wqb.entry_mat(0, 2)  = 4;
        wqb.entry_mat(0, 3)  = 2;
        wqb.entry_mat(0, 12) = 2;
//
        wqb.entry_mat(1, 1)  = -4;
        wqb.entry_mat(1, 2)  = 4;
        wqb.entry_mat(1, 4)  = 2;
        wqb.entry_mat(1, 13) = 2;
//
        wqb.entry_mat(2, 2)  = -4;
        wqb.entry_mat(2, 5)  = 2;
        wqb.entry_mat(2, 14) = 2;
//
        wqb.entry_mat(3, 3)  = -4;
        wqb.entry_mat(3, 4)  = 4;
        wqb.entry_mat(3, 5)  = 4;
        wqb.entry_mat(3, 6)  = 2;
        wqb.entry_mat(3, 9)  = 2;
        wqb.entry_mat(3, 12) = 2;
//
        wqb.entry_mat(4, 4)  = -4;
        wqb.entry_mat(4, 5)  = 4;
        wqb.entry_mat(4, 7)  = 2;
        wqb.entry_mat(4, 10) = 2;
        wqb.entry_mat(4, 13) = 2;
//
        wqb.entry_mat(5, 5)  = -4;
        wqb.entry_mat(5, 8)  = 2;
        wqb.entry_mat(5, 11) = 2;
        wqb.entry_mat(5, 14) = 2;
//
        wqb.entry_mat(6, 6) = -4;
        wqb.entry_mat(6, 7) = 4;
        wqb.entry_mat(6, 8) = 4;
        wqb.entry_mat(6, 9) = 2;
//
        wqb.entry_mat(7, 7) = -4;
        wqb.entry_mat(7, 8) = 4;
        wqb.entry_mat(7, 10) = 2;
//
        wqb.entry_mat(8, 8)  = -4;
        wqb.entry_mat(8, 11) = 2;
//
        wqb.entry_mat(9, 9) = -4;
        wqb.entry_mat(9, 10) = 4;
        wqb.entry_mat(9, 11) = 4;
        wqb.entry_mat(9, 12) = 2;
//
        wqb.entry_mat(10, 10) = -4;
        wqb.entry_mat(10, 11) = 4;
        wqb.entry_mat(10, 13) = 2;
//
        wqb.entry_mat(11, 11) = -4;
        wqb.entry_mat(11, 14) = 2;
//
        wqb.entry_mat(12, 12) = -4;
        wqb.entry_mat(12, 13) = 4;
        wqb.entry_mat(12, 14) = 4;
//
        wqb.entry_mat(13, 13) = -4;
        wqb.entry_mat(13, 14) = 4;
//
        wqb.entry_mat(14, 14) = -4;
// 
        wqb.build_symmetric();
//
        wqb.solve_serial_loop();
        s = wqb.get_solution();
        std::cout<<"solution :: ";
        for (i=0;i!=wqb.n_;i++) {
            std::cout<<" "<<s[ i ];
        }
        std::cout<<", ";
        std::cout<<"min "<<wqb.opt_value()<<" (multiple solutions)\n";
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    static void test_9() {
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
        qb::qubo wqb;
//          PURPOSE: Working cubo
/*  Local arrays:                                                                      */
        const float *s = 0;
//          PURPOSE: solution
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
        std::cout<<"test 9, page 26 (find max), ";
        wqb.find_max();
        wqb.n_ = 10;
        wqb.allocate_mat();
        wqb.entry_mat(0, 0) = 526;
        wqb.entry_mat(0, 1) = -150;
        wqb.entry_mat(0, 2) = -160;
        wqb.entry_mat(0, 3) = -190;
        wqb.entry_mat(0, 4) = -180;
        wqb.entry_mat(0, 5) = -20;
        wqb.entry_mat(0, 6) = -40;
        wqb.entry_mat(0, 7) = 30;
        wqb.entry_mat(0, 8) = 60;
        wqb.entry_mat(0, 9) = 120;
//
        wqb.entry_mat(1, 1) = 574;
        wqb.entry_mat(1, 2) = -180;
        wqb.entry_mat(1, 3) = -200;
        wqb.entry_mat(1, 4) = -200;
        wqb.entry_mat(1, 5) = -20;
        wqb.entry_mat(1, 6) = -40;
        wqb.entry_mat(1, 7) = 30;
        wqb.entry_mat(1, 8) = 60;
        wqb.entry_mat(1, 9) = 120;
//
        wqb.entry_mat(2, 2) = 688;
        wqb.entry_mat(2, 3) = -220;
        wqb.entry_mat(2, 4) = -200;
        wqb.entry_mat(2, 5) = -40;
        wqb.entry_mat(2, 6) = -80;
        wqb.entry_mat(2, 7) = 20;
        wqb.entry_mat(2, 8) = 40;
        wqb.entry_mat(2, 9) = 80;
//
        wqb.entry_mat(3, 3) = 645;
        wqb.entry_mat(3, 4) = -240;
        wqb.entry_mat(3, 5) = -30;
        wqb.entry_mat(3, 6) = -60;
        wqb.entry_mat(3, 7) = 40;
        wqb.entry_mat(3, 8) = 80;
        wqb.entry_mat(3, 9) = 160;
//
        wqb.entry_mat(4, 4) = 605;
        wqb.entry_mat(4, 5) = -20;
        wqb.entry_mat(4, 6) = -40;
        wqb.entry_mat(4, 7) = 40;
        wqb.entry_mat(4, 8) = 80;
        wqb.entry_mat(4, 9) = 160;
//
        wqb.entry_mat(5, 5)  = 130;
        wqb.entry_mat(5, 6)  = -20;
//
        wqb.entry_mat(6, 6) = 240;
//
        wqb.entry_mat(7, 7) = -110;
        wqb.entry_mat(7, 8) = -20;
        wqb.entry_mat(7, 9) = -40;
//
        wqb.entry_mat(8, 8)  = -240;
        wqb.entry_mat(8, 9) = 80;
//
        wqb.entry_mat(9, 9) = -560;
// 
        wqb.build_symmetric();
//
        wqb.solve_serial_loop();
        s = wqb.get_solution();
        std::cout<<"solution :: ";
        for (i=0;i!=wqb.n_;i++) {
            std::cout<<" "<<s[ i ];
        }
        std::cout<<", ";
        std::cout<<"min "<<wqb.opt_value()<<"\n";
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    static void test_10() {
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
        qb::qubo wqb;
//          PURPOSE: Working cubo
/*  Local arrays:                                                                      */
        const float *s = 0;
//          PURPOSE: solution
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
        std::cout<<"test 10, page 29 (find max), ";
        wqb.n_ = 9;
        wqb.allocate_mat();
        wqb.entry_mat(0, 0) = -400;
        wqb.entry_mat(0, 1) = 200;
        wqb.entry_mat(0, 2) = 200;
        wqb.entry_mat(0, 3) = 200;
        wqb.entry_mat(0, 4) = 40;
        wqb.entry_mat(0, 5) = 75;
        wqb.entry_mat(0, 6) = 200;
        wqb.entry_mat(0, 7) = 16;
        wqb.entry_mat(0, 8) = 30;
//
        wqb.entry_mat(1, 1) = -400;
        wqb.entry_mat(1, 2) = 200;
        wqb.entry_mat(1, 3) = 40;
        wqb.entry_mat(1, 4) = 200;
        wqb.entry_mat(1, 5) = 65;
        wqb.entry_mat(1, 6) = 16;
        wqb.entry_mat(1, 7) = 200;
        wqb.entry_mat(1, 8) = 26;
//
        wqb.entry_mat(2, 2) = -400;
        wqb.entry_mat(2, 3) = 75;
        wqb.entry_mat(2, 4) = 65;
        wqb.entry_mat(2, 5) = 200;
        wqb.entry_mat(2, 6) = 30;
        wqb.entry_mat(2, 7) = 26;
        wqb.entry_mat(2, 8) = 200;
//
        wqb.entry_mat(3, 3) = -400;
        wqb.entry_mat(3, 4) = 200;
        wqb.entry_mat(3, 5) = 200;
        wqb.entry_mat(3, 6) = 200;
        wqb.entry_mat(3, 7) = 24;
        wqb.entry_mat(3, 8) = 45;
//
        wqb.entry_mat(4, 4) = -400;
        wqb.entry_mat(4, 5) = 200;
        wqb.entry_mat(4, 6) = 24;
        wqb.entry_mat(4, 7) = 200;
        wqb.entry_mat(4, 8) = 39;
//
        wqb.entry_mat(5, 5) = -400;
        wqb.entry_mat(5, 6) = 45;
        wqb.entry_mat(5, 7) = 39;
        wqb.entry_mat(5, 8) = 200;
//
        wqb.entry_mat(6, 6) = -400;
        wqb.entry_mat(6, 7) = 200;
        wqb.entry_mat(6, 8) = 200;
//
        wqb.entry_mat(7, 7) = -400;
        wqb.entry_mat(7, 8) = 200;
//
        wqb.entry_mat(8, 8) = -400;
// 
        wqb.build_symmetric();
//
        wqb.solve_serial_loop();
        s = wqb.get_solution();
        std::cout<<"solution :: ";
        for (i=0;i!=wqb.n_;i++) {
            std::cout<<" "<<s[ i ];
        }
        std::cout<<", ";
        std::cout<<"min "<<wqb.opt_value()<<"\n";
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    static void test_11() {
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
        qb::qubo wqb;
//          PURPOSE: Working cubo
/*  Local arrays:                                                                      */
        const float *s = 0;
//          PURPOSE: solution
/*  ...................................................................................*/
/*  Listing                                                                            */
/*                                                                                     */
        std::cout<<"test 11, page 31 (find max), ";
        wqb.find_max();
        wqb.n_ = 6;
        wqb.allocate_mat();
        wqb.entry_mat(0, 0) = 1922;
        wqb.entry_mat(0, 1) = -476;
        wqb.entry_mat(0, 2) = -397;
        wqb.entry_mat(0, 3) = -235;
        wqb.entry_mat(0, 4) = -80;
        wqb.entry_mat(0, 5) = -160;
//
        wqb.entry_mat(1, 1) = 1565;
        wqb.entry_mat(1, 2) = -299;
        wqb.entry_mat(1, 3) = -177;
        wqb.entry_mat(1, 4) = -60;
        wqb.entry_mat(1, 5) = -120;
//
        wqb.entry_mat(2, 2) = 1352;
        wqb.entry_mat(2, 3) = -148;
        wqb.entry_mat(2, 4) = -50;
        wqb.entry_mat(2, 5) = -100;
//
        wqb.entry_mat(3, 3) = 874;
        wqb.entry_mat(3, 4) = -30;
        wqb.entry_mat(3, 5) = -60;
//
        wqb.entry_mat(4, 4) = 310;
        wqb.entry_mat(4, 5) = -20;
//
        wqb.entry_mat(5, 5) = 600;
//
        wqb.build_symmetric();
//
        wqb.solve_serial_loop();
        s = wqb.get_solution();
        std::cout<<"solution :: ";
        for (i=0;i!=wqb.n_;i++) {
            std::cout<<" "<<s[ i ];
        }
        std::cout<<", ";
        std::cout<<"min "<<wqb.opt_value()<<"\n";
/*                                                                                     */
/*  End Listing                                                                        */
/*  ...................................................................................*/
    }
/*  =====================================================================================
  + <A one line description of this function>
    ===================================================================================*/
    int main() {
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
//      I can use sparse matrices, and advanced arithmetic to obtain faster result with big data.
        std::cout<<"problems are taken from https://arxiv.org/ftp/arxiv/papers/1811/1811.11538.pdf\n";
        test_1();
        test_2();
        test_3();
        test_4();
        test_5();
        test_6();
        test_7();
        test_8();
        test_9();
        test_10();
        test_11();
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
