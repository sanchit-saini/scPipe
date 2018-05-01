// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_sc_trim_barcode_paired
void rcpp_sc_trim_barcode_paired(Rcpp::CharacterVector outfq, Rcpp::CharacterVector r1, Rcpp::CharacterVector r2, Rcpp::NumericVector bs1, Rcpp::NumericVector bl1, Rcpp::NumericVector bs2, Rcpp::NumericVector bl2, Rcpp::NumericVector us, Rcpp::NumericVector ul, Rcpp::NumericVector rmlow, Rcpp::NumericVector rmN, Rcpp::NumericVector minq, Rcpp::NumericVector numbq);
RcppExport SEXP _scPipe_rcpp_sc_trim_barcode_paired(SEXP outfqSEXP, SEXP r1SEXP, SEXP r2SEXP, SEXP bs1SEXP, SEXP bl1SEXP, SEXP bs2SEXP, SEXP bl2SEXP, SEXP usSEXP, SEXP ulSEXP, SEXP rmlowSEXP, SEXP rmNSEXP, SEXP minqSEXP, SEXP numbqSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type outfq(outfqSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type r1(r1SEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type r2(r2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type bs1(bs1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type bl1(bl1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type bs2(bs2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type bl2(bl2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type us(usSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type ul(ulSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type rmlow(rmlowSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type rmN(rmNSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type minq(minqSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type numbq(numbqSEXP);
    rcpp_sc_trim_barcode_paired(outfq, r1, r2, bs1, bl1, bs2, bl2, us, ul, rmlow, rmN, minq, numbq);
    return R_NilValue;
END_RCPP
}
// rcpp_sc_exon_mapping
void rcpp_sc_exon_mapping(Rcpp::CharacterVector inbam, Rcpp::CharacterVector outbam, Rcpp::CharacterVector annofn, Rcpp::CharacterVector am, Rcpp::CharacterVector ge, Rcpp::CharacterVector bc, Rcpp::CharacterVector mb, Rcpp::NumericVector bc_len, Rcpp::NumericVector UMI_len, Rcpp::NumericVector stnd, Rcpp::NumericVector fix_chr);
RcppExport SEXP _scPipe_rcpp_sc_exon_mapping(SEXP inbamSEXP, SEXP outbamSEXP, SEXP annofnSEXP, SEXP amSEXP, SEXP geSEXP, SEXP bcSEXP, SEXP mbSEXP, SEXP bc_lenSEXP, SEXP UMI_lenSEXP, SEXP stndSEXP, SEXP fix_chrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type inbam(inbamSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type outbam(outbamSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type annofn(annofnSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type am(amSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type ge(geSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type bc(bcSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type mb(mbSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type bc_len(bc_lenSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type UMI_len(UMI_lenSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type stnd(stndSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type fix_chr(fix_chrSEXP);
    rcpp_sc_exon_mapping(inbam, outbam, annofn, am, ge, bc, mb, bc_len, UMI_len, stnd, fix_chr);
    return R_NilValue;
END_RCPP
}
// rcpp_sc_demultiplex
void rcpp_sc_demultiplex(Rcpp::CharacterVector inbam, Rcpp::CharacterVector outdir, Rcpp::CharacterVector bc_anno, Rcpp::NumericVector max_mis, Rcpp::CharacterVector am, Rcpp::CharacterVector ge, Rcpp::CharacterVector bc, Rcpp::CharacterVector mb, Rcpp::CharacterVector mito, Rcpp::LogicalVector has_UMI);
RcppExport SEXP _scPipe_rcpp_sc_demultiplex(SEXP inbamSEXP, SEXP outdirSEXP, SEXP bc_annoSEXP, SEXP max_misSEXP, SEXP amSEXP, SEXP geSEXP, SEXP bcSEXP, SEXP mbSEXP, SEXP mitoSEXP, SEXP has_UMISEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type inbam(inbamSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type outdir(outdirSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type bc_anno(bc_annoSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type max_mis(max_misSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type am(amSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type ge(geSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type bc(bcSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type mb(mbSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type mito(mitoSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type has_UMI(has_UMISEXP);
    rcpp_sc_demultiplex(inbam, outdir, bc_anno, max_mis, am, ge, bc, mb, mito, has_UMI);
    return R_NilValue;
END_RCPP
}
// rcpp_sc_gene_counting
void rcpp_sc_gene_counting(Rcpp::CharacterVector outdir, Rcpp::CharacterVector bc_anno, Rcpp::NumericVector UMI_cor, Rcpp::NumericVector gene_fl);
RcppExport SEXP _scPipe_rcpp_sc_gene_counting(SEXP outdirSEXP, SEXP bc_annoSEXP, SEXP UMI_corSEXP, SEXP gene_flSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type outdir(outdirSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type bc_anno(bc_annoSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type UMI_cor(UMI_corSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type gene_fl(gene_flSEXP);
    rcpp_sc_gene_counting(outdir, bc_anno, UMI_cor, gene_fl);
    return R_NilValue;
END_RCPP
}
// rcpp_sc_detect_bc
void rcpp_sc_detect_bc(Rcpp::CharacterVector infq, Rcpp::CharacterVector outcsv, Rcpp::CharacterVector suffix, Rcpp::NumericVector bc_len, Rcpp::NumericVector max_reads, Rcpp::NumericVector number_of_cells, Rcpp::NumericVector min_count, Rcpp::NumericVector max_mismatch, Rcpp::CharacterVector white_list);
RcppExport SEXP _scPipe_rcpp_sc_detect_bc(SEXP infqSEXP, SEXP outcsvSEXP, SEXP suffixSEXP, SEXP bc_lenSEXP, SEXP max_readsSEXP, SEXP number_of_cellsSEXP, SEXP min_countSEXP, SEXP max_mismatchSEXP, SEXP white_listSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type infq(infqSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type outcsv(outcsvSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type suffix(suffixSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type bc_len(bc_lenSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type max_reads(max_readsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type number_of_cells(number_of_cellsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type min_count(min_countSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type max_mismatch(max_mismatchSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type white_list(white_listSEXP);
    rcpp_sc_detect_bc(infq, outcsv, suffix, bc_len, max_reads, number_of_cells, min_count, max_mismatch, white_list);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_scPipe_rcpp_sc_trim_barcode_paired", (DL_FUNC) &_scPipe_rcpp_sc_trim_barcode_paired, 13},
    {"_scPipe_rcpp_sc_exon_mapping", (DL_FUNC) &_scPipe_rcpp_sc_exon_mapping, 11},
    {"_scPipe_rcpp_sc_demultiplex", (DL_FUNC) &_scPipe_rcpp_sc_demultiplex, 10},
    {"_scPipe_rcpp_sc_gene_counting", (DL_FUNC) &_scPipe_rcpp_sc_gene_counting, 4},
    {"_scPipe_rcpp_sc_detect_bc", (DL_FUNC) &_scPipe_rcpp_sc_detect_bc, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_scPipe(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
