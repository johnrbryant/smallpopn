// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// make_time_remaining
double make_time_remaining(int step, bool is_lower, bool is_final_age);
RcppExport SEXP _smallpopn_make_time_remaining(SEXP stepSEXP, SEXP is_lowerSEXP, SEXP is_final_ageSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type step(stepSEXP);
    Rcpp::traits::input_parameter< bool >::type is_lower(is_lowerSEXP);
    Rcpp::traits::input_parameter< bool >::type is_final_age(is_final_ageSEXP);
    rcpp_result_gen = Rcpp::wrap(make_time_remaining(step, is_lower, is_final_age));
    return rcpp_result_gen;
END_RCPP
}
// microsim_inner
Rcpp::List microsim_inner(Rcpp::IntegerVector initial_popn, Rcpp::NumericVector fertility_rates, Rcpp::NumericVector mortality_rates, int n_age, int n_sex, int n_period, int step, int i_dom_sex);
RcppExport SEXP _smallpopn_microsim_inner(SEXP initial_popnSEXP, SEXP fertility_ratesSEXP, SEXP mortality_ratesSEXP, SEXP n_ageSEXP, SEXP n_sexSEXP, SEXP n_periodSEXP, SEXP stepSEXP, SEXP i_dom_sexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type initial_popn(initial_popnSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type fertility_rates(fertility_ratesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mortality_rates(mortality_ratesSEXP);
    Rcpp::traits::input_parameter< int >::type n_age(n_ageSEXP);
    Rcpp::traits::input_parameter< int >::type n_sex(n_sexSEXP);
    Rcpp::traits::input_parameter< int >::type n_period(n_periodSEXP);
    Rcpp::traits::input_parameter< int >::type step(stepSEXP);
    Rcpp::traits::input_parameter< int >::type i_dom_sex(i_dom_sexSEXP);
    rcpp_result_gen = Rcpp::wrap(microsim_inner(initial_popn, fertility_rates, mortality_rates, n_age, n_sex, n_period, step, i_dom_sex));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_smallpopn_make_time_remaining", (DL_FUNC) &_smallpopn_make_time_remaining, 3},
    {"_smallpopn_microsim_inner", (DL_FUNC) &_smallpopn_microsim_inner, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_smallpopn(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
