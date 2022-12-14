/*  ===================================================================================*/
    #ifndef QUBO_HPP
/*  ...................................................................................*/
        #define QUBO_HPP
//          PURPOSE:
        namespace qb {
            class qubo {
                public:
                    qubo();
//                      REQUIRE: 
//                      PROMISE: 
                    ~qubo();
//                      REQUIRE: 
//                      PROMISE: 
                public:
                    void allocate_mat();
//                      REQUIRE: 
//                      PROMISE: 
                    float &entry_mat(const int &i, const int &j) {return mat_[i * n_ + j];}
//                      REQUIRE: 
//                      PROMISE: 
                    void solve();
//                      REQUIRE: 
//                      PROMISE: 
                    void solve_serial_loop();
//                      REQUIRE: 
//                      PROMISE: 
                    const float *get_solution() const {return xol_;}
//                      REQUIRE: 
//                      PROMISE: 
                    void build_symmetric();
//                      REQUIRE: 
//                      PROMISE: 
                    float opt_value() const {return mvl_;}
//                      REQUIRE: 
//                      PROMISE: 
                    void find_min() {find_min_ = true;}
                    void find_max() {find_min_ = false;}
//                      REQUIRE: 
//                      PROMISE: 
                public:
                    int n_;
//                      PURPOSE: 
                    float *mat_;
//                      PURPOSE: 
                    float *xol_;
//                      PURPOSE: 
                    float mvl_;
//                      PURPOSE: Min value
                    bool find_min_;
//                      PURPOSE: Find min or max
            }; // qubo
        }; // qb
//
/*  ...................................................................................*/
    #endif // QUBO_HPP
/*  ===================================================================================*/
