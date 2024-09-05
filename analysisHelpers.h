#include "TH1.h"
#include "TH2.h"


using namespace std;
#ifndef analysisHelpers_h
#define analysisHelpers_h

void normalizeHisto(TH1D *hist);
void normalizeHisto2D(TH2D *hist);
void YAxisRangeUserName(TH1D *hist);
void XaxisName(TH1D *hist, TString xLabel);
TH1D* MakeRatioPlot(TH1D* hnum, TH1D* hden, TString yLabel);
#endif
