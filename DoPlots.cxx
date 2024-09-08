#include "DoPlots.h"
#include "TH2.h"
#include "TFile.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TStyle.h"
#include "TLine.h"

using namespace std;

#ifndef DoPlots_cxx
#define DoPlots_cxx

void FinalPlots(TFile* outFileOmni, TFile* outFileTruth, TString variable){
  
  
  TCanvas* c = new TCanvas("", "", 800, 800);

  TPad* pad1 = new TPad("pad1", "", 0, 0.3, 1, 1);
  TPad* pad2 = new TPad("pad2", "", 0, 0, 1, 0.3);

  pad1->SetBottomMargin(0.); 
  pad1->SetTopMargin(0.05);   
  pad2->SetTopMargin(0.);   
  pad2->SetBottomMargin(0.3); 

  c->cd();
  pad1->Draw();
  pad2->Draw();

  pad1->cd();
  gPad->SetLogy();
  TH1D* hReco_omni = (TH1D*)outFileOmni->Get(variable+"_omni");
  TH1D* hTrue      = (TH1D*)outFileTruth->Get(variable);
  hReco_omni->SetLineColor(kBlue);
  hTrue->SetLineColor(kRed);
  hReco_omni->SetMarkerColor(kBlue);
  hTrue->SetMarkerColor(kRed);
  
  TLegend*l = new TLegend(0.7, 0.7, 0.9, 0.9);
  l->AddEntry(hReco_omni, "reco omni", "l");
  l->AddEntry(hTrue, "truth", "l");
  hReco_omni->Draw();
  hTrue->Draw("same");
  l->Draw("same");
  pad2->cd();

  // Create the ratio histogram
  TH1D* ratio = (TH1D*)hReco_omni->Clone("ratio");
  ratio->Divide(hTrue);

  ratio->SetLineColor(kBlack);
  ratio->SetTitle("");
  ratio->GetYaxis()->SetTitle("Omni / Truth");
  ratio->GetYaxis()->SetNdivisions(505);
  ratio->GetYaxis()->SetTitleSize(0.1);
  ratio->GetYaxis()->SetTitleOffset(0.5);
  ratio->GetYaxis()->SetLabelSize(0.1);
  ratio->GetXaxis()->SetTitleSize(0.1);
  ratio->GetXaxis()->SetLabelSize(0.1);
  ratio->GetYaxis()->SetRangeUser(0, 2);
  ratio->GetXaxis()->SetTitle(variable);
  ratio->Draw("HIST");
  double xmin = ratio->GetXaxis()->GetXmin();
  double xmax = ratio->GetXaxis()->GetXmax();
  TLine* line = new TLine(xmin, 1, xmax, 1);
  line->SetLineStyle(4);
  line->SetLineColor(kBlack);
  line->Draw("same");
  c->Update();
  c->SaveAs("plots/"+variable+".png");

}


#endif
