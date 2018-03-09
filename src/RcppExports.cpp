// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// do_approx3d
NumericVector do_approx3d(NumericVector x, NumericVector y, NumericVector z, NumericVector f, NumericVector xout, NumericVector yout, NumericVector zout);
RcppExport SEXP _oce_do_approx3d(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP fSEXP, SEXP xoutSEXP, SEXP youtSEXP, SEXP zoutSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xout(xoutSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type yout(youtSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type zout(zoutSEXP);
    rcpp_result_gen = Rcpp::wrap(do_approx3d(x, y, z, f, xout, yout, zout));
    return rcpp_result_gen;
END_RCPP
}
// do_fill_gap_1d
NumericVector do_fill_gap_1d(NumericVector x, NumericVector rule);
RcppExport SEXP _oce_do_fill_gap_1d(SEXP xSEXP, SEXP ruleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rule(ruleSEXP);
    rcpp_result_gen = Rcpp::wrap(do_fill_gap_1d(x, rule));
    return rcpp_result_gen;
END_RCPP
}
// do_geoddist_alongpath
NumericVector do_geoddist_alongpath(NumericVector lon, NumericVector lat, NumericVector a, NumericVector f);
RcppExport SEXP _oce_do_geoddist_alongpath(SEXP lonSEXP, SEXP latSEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lon(lonSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lat(latSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(do_geoddist_alongpath(lon, lat, a, f));
    return rcpp_result_gen;
END_RCPP
}
// do_geoddist
NumericVector do_geoddist(NumericVector lon1, NumericVector lat1, NumericVector lon2, NumericVector lat2, NumericVector a, NumericVector f);
RcppExport SEXP _oce_do_geoddist(SEXP lon1SEXP, SEXP lat1SEXP, SEXP lon2SEXP, SEXP lat2SEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lon1(lon1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lon2(lon2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lat2(lat2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(do_geoddist(lon1, lat1, lon2, lat2, a, f));
    return rcpp_result_gen;
END_RCPP
}
// do_geod_xy
List do_geod_xy(NumericVector lon, NumericVector lat, NumericVector lonr, NumericVector latr, NumericVector a, NumericVector f);
RcppExport SEXP _oce_do_geod_xy(SEXP lonSEXP, SEXP latSEXP, SEXP lonrSEXP, SEXP latrSEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type lon(lonSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lat(latSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonr(lonrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latr(latrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(do_geod_xy(lon, lat, lonr, latr, a, f));
    return rcpp_result_gen;
END_RCPP
}
// do_geod_xy_inverse
List do_geod_xy_inverse(NumericVector x, NumericVector y, NumericVector lonr, NumericVector latr, NumericVector a, NumericVector f);
RcppExport SEXP _oce_do_geod_xy_inverse(SEXP xSEXP, SEXP ySEXP, SEXP lonrSEXP, SEXP latrSEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonr(lonrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latr(latrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(do_geod_xy_inverse(x, y, lonr, latr, a, f));
    return rcpp_result_gen;
END_RCPP
}
// do_gradient
List do_gradient(NumericMatrix m, NumericVector x, NumericVector y);
RcppExport SEXP _oce_do_gradient(SEXP mSEXP, SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(do_gradient(m, x, y));
    return rcpp_result_gen;
END_RCPP
}
// do_matrix_smooth
NumericMatrix do_matrix_smooth(NumericMatrix mat);
RcppExport SEXP _oce_do_matrix_smooth(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(do_matrix_smooth(mat));
    return rcpp_result_gen;
END_RCPP
}
// do_oceApprox
NumericVector do_oceApprox(NumericVector x, NumericVector y, NumericVector xout, NumericVector method);
RcppExport SEXP _oce_do_oceApprox(SEXP xSEXP, SEXP ySEXP, SEXP xoutSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xout(xoutSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(do_oceApprox(x, y, xout, method));
    return rcpp_result_gen;
END_RCPP
}
// do_oce_convolve
NumericVector do_oce_convolve(NumericVector x, NumericVector f, NumericVector end);
RcppExport SEXP _oce_do_oce_convolve(SEXP xSEXP, SEXP fSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type end(endSEXP);
    rcpp_result_gen = Rcpp::wrap(do_oce_convolve(x, f, end));
    return rcpp_result_gen;
END_RCPP
}
// do_oce_filter
NumericVector do_oce_filter(NumericVector x, NumericVector a, NumericVector b);
RcppExport SEXP _oce_do_oce_filter(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(do_oce_filter(x, a, b));
    return rcpp_result_gen;
END_RCPP
}
// do_runlm
List do_runlm(NumericVector x, NumericVector y, NumericVector xout, NumericVector window, NumericVector L);
RcppExport SEXP _oce_do_runlm(SEXP xSEXP, SEXP ySEXP, SEXP xoutSEXP, SEXP windowSEXP, SEXP LSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xout(xoutSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type window(windowSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type L(LSEXP);
    rcpp_result_gen = Rcpp::wrap(do_runlm(x, y, xout, window, L));
    return rcpp_result_gen;
END_RCPP
}
// do_sfm_enu
List do_sfm_enu(NumericVector heading, NumericVector pitch, NumericVector roll, NumericVector starboard, NumericVector forward, NumericVector mast);
RcppExport SEXP _oce_do_sfm_enu(SEXP headingSEXP, SEXP pitchSEXP, SEXP rollSEXP, SEXP starboardSEXP, SEXP forwardSEXP, SEXP mastSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type heading(headingSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pitch(pitchSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type roll(rollSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type starboard(starboardSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type forward(forwardSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mast(mastSEXP);
    rcpp_result_gen = Rcpp::wrap(do_sfm_enu(heading, pitch, roll, starboard, forward, mast));
    return rcpp_result_gen;
END_RCPP
}
// do_trap
NumericVector do_trap(NumericVector x, NumericVector y, NumericVector type);
RcppExport SEXP _oce_do_trap(SEXP xSEXP, SEXP ySEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(do_trap(x, y, type));
    return rcpp_result_gen;
END_RCPP
}
