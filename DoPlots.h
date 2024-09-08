#include "TH1.h"
#include "TH2.h"
#include "TFile.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TStyle.h"

using namespace std;
#ifndef DoPlots_h
#define DoPlots_h

void FinalPlots(TFile* outFileOmni, TFile* outFileTruth, TString variable);
void Plot1DDistribution(TH1D *hist);
void Plot2DDistribution(TH2D *hist);
#endif
