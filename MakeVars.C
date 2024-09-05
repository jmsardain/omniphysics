#define MakeVars_cxx
#include "MakeVars.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "jetHelpers.h"
#include "analysisHelpers.h"
#include "fastjet/ClusterSequence.hh"
#include "fastjet/tools/Recluster.hh" 
#include <TLorentzVector.h>
#include "jetHelpers.h"
using namespace fastjet;
using namespace std;

void MakeVars::Loop(){

   // R=0.4 jets
  TH1D* hpT_R04 = new TH1D("", "", 150, 0, 1000);
  TH1D* hEEC_R04 = new TH1D("", "", 150, 0, 1e7);
  TH1D* hLund_z_R04 = new TH1D("", "", 10, 0, 10);
  TH1D* hLund_dR_R04 = new TH1D("", "", 10, 0, 5);
  TH2D* hLund_plane_R04 = new TH2D("", "", 10, 0, 5, 10, 0, 10);

  TH1D* hpT_R04_omni = new TH1D("", "", 150, 0, 1000);
  TH1D* hEEC_R04_omni = new TH1D("", "", 150, 0, 1e7);
  TH1D* hLund_z_R04_omni = new TH1D("", "", 10, 0, 10);
  TH1D* hLund_dR_R04_omni = new TH1D("", "", 10, 0, 5);
  TH2D* hLund_plane_R04_omni = new TH2D("", "", 10, 0, 5, 10, 0, 10);

  // R=0.6 jets
  TH1D* hpT_R06 = new TH1D("", "", 150, 0, 1000);
  TH1D* hEEC_R06 = new TH1D("", "", 150, 0, 1e7);
  TH1D* hLund_z_R06 = new TH1D("", "",  10, 0, 10);
  TH1D* hLund_dR_R06 = new TH1D("", "", 10, 0, 5);
  TH2D* hLund_plane_R06 = new TH2D("", "", 10, 0, 5, 10, 0, 10);

  TH1D* hpT_R06_omni = new TH1D("", "", 150, 0, 1000);
  TH1D* hEEC_R06_omni = new TH1D("", "", 150, 0, 1e7);
  TH1D* hLund_z_R06_omni = new TH1D("", "",  10, 0, 10);
  TH1D* hLund_dR_R06_omni = new TH1D("", "", 10, 0, 5);
  TH2D* hLund_plane_R06_omni = new TH2D("", "", 10, 0, 5, 10, 0, 10);

  // R=1.0 jets
  TH1D* hpT_R10 = new TH1D("", "", 150, 0, 1000);
  TH1D* hEEC_R10 = new TH1D("", "", 150, 0, 1e7);
  TH1D* hLund_z_R10 = new TH1D("", "",  10, 0, 10);
  TH1D* hLund_dR_R10 = new TH1D("", "", 10, 0, 5);
  TH2D* hLund_plane_R10 = new TH2D("", "", 10, 0, 5, 10, 0, 10);

  TH1D* hpT_R10_omni = new TH1D("", "", 150, 0, 1000);
  TH1D* hEEC_R10_omni = new TH1D("", "", 150, 0, 1e7);
  TH1D* hLund_z_R10_omni = new TH1D("", "",  10, 0, 10);
  TH1D* hLund_dR_R10_omni = new TH1D("", "", 10, 0, 5);
  TH2D* hLund_plane_R10_omni = new TH2D("", "", 10, 0, 5, 10, 0, 10);

  // ring around 0.6
  TH1D* h_fracpT_ring = new TH1D("", "", 100, 0, 1);
  TH1D* h_fracE_ring = new TH1D("", "", 100, 0, 1);

  TH1D* h_fracpT_ring_omni = new TH1D("", "", 100, 0, 1);
  TH1D* h_fracE_ring_omni = new TH1D("", "", 100, 0, 1);


  JetDefinition jetdef_r04(antikt_algorithm, 0.4);
  JetDefinition jetdef_r06(antikt_algorithm, 0.6);
  JetDefinition jetdef_r10(antikt_algorithm, 1.0);


   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      
      if (jentry%100000==0) cout << " Entry #" << jentry << endl;
      if(truth_pass190==0) continue;

      vector<PseudoJet> particles;

      for (int i=0; i<ntruth_pT_tracks; i++){ 
         TLorentzVector constit_tlv;
         constit_tlv.SetPtEtaPhiM(truth_pT_tracks[i], truth_eta_tracks[i], truth_phi_tracks[i], 0.13957);
         PseudoJet constit_pj;
         constit_pj.reset_PtYPhiM(constit_tlv.Pt(), constit_tlv.Rapidity(), constit_tlv.Phi(), constit_tlv.M());
         particles.push_back(constit_pj);
      }

      ClusterSequence cs_seq_r04(particles, jetdef_r04);
      ClusterSequence cs_seq_r06(particles, jetdef_r06);
      ClusterSequence cs_seq_r10(particles, jetdef_r10);
      vector<PseudoJet> R04_jets = sorted_by_pt(cs_seq_r04.inclusive_jets());
      vector<PseudoJet> R06_jets = sorted_by_pt(cs_seq_r06.inclusive_jets());
      vector<PseudoJet> R10_jets = sorted_by_pt(cs_seq_r10.inclusive_jets());


      // Get Lund variables 
      std::vector<double> R04_lundz;
      std::vector<double> R04_lundkt;
      std::vector<double> R04_lundDr;
      processJets(R04_jets[0], 0.4, R04_lundz, R04_lundkt, R04_lundDr);

      std::vector<double> R06_lundz;
      std::vector<double> R06_lundkt;
      std::vector<double> R06_lundDr;
      processJets(R06_jets[0], 0.6, R06_lundz, R06_lundkt, R06_lundDr);

      std::vector<double> R10_lundz;
      std::vector<double> R10_lundkt;
      std::vector<double> R10_lundDr;
      processJets(R10_jets[0], 1.0, R10_lundz, R10_lundkt, R10_lundDr);

      // Get values for leading jet for now ....
      // R=0.4 jets
      hpT_R04->Fill(R04_jets[0].pt());
      hEEC_R04->Fill(  GetEEC(R04_jets[0].constituents()) );
      for (size_t i = 0; i < R04_lundz.size(); ++i) {
      hLund_z_R04->Fill( R04_lundz[i]) ; 
      hLund_dR_R04->Fill( R04_lundDr[i]) ; 
      hLund_plane_R04->Fill( R04_lundDr[i] , R04_lundz[i] );  
      }
      hpT_R04_omni->Fill(R04_jets[0].pt(), omni_weight_test);
      hEEC_R04_omni->Fill(  GetEEC(R04_jets[0].constituents()), omni_weight_test);
      for (size_t i = 0; i < R04_lundz.size(); ++i) {
      hLund_z_R04_omni->Fill( R04_lundz[i], omni_weight_test) ; 
      hLund_dR_R04_omni->Fill( R04_lundDr[i], omni_weight_test) ; 
      hLund_plane_R04_omni->Fill( R04_lundDr[i] , R04_lundz[i], omni_weight_test);  
      }

      // R=0.6 jets
      hpT_R06->Fill(R06_jets[0].pt());
      hEEC_R06->Fill(  GetEEC(R06_jets[0].constituents()) );
      for (size_t i = 0; i < R06_lundz.size(); ++i) {
      hLund_z_R06->Fill( R06_lundz[i]) ; 
      hLund_dR_R06->Fill( R06_lundDr[i]) ; 
      hLund_plane_R06->Fill( R06_lundDr[i] , R06_lundz[i] );  
      }

      hpT_R06_omni->Fill(R06_jets[0].pt(), omni_weight_test);
      hEEC_R06_omni->Fill(  GetEEC(R06_jets[0].constituents()), omni_weight_test);
      for (size_t i = 0; i < R06_lundz.size(); ++i) {
      hLund_z_R06_omni->Fill( R06_lundz[i], omni_weight_test) ; 
      hLund_dR_R06_omni->Fill( R06_lundDr[i], omni_weight_test) ; 
      hLund_plane_R06_omni->Fill( R06_lundDr[i] , R06_lundz[i], omni_weight_test);  
      }

      
      // R=1.0 jets
      hpT_R10->Fill(R10_jets[0].pt());
      hEEC_R10->Fill(  GetEEC(R10_jets[0].constituents()) );
      for (size_t i = 0; i < R10_lundz.size(); ++i) {
      hLund_z_R10->Fill( R10_lundz[i]) ; 
      hLund_dR_R10->Fill( R10_lundDr[i]) ; 
      hLund_plane_R10->Fill( R10_lundDr[i] , R10_lundz[i]);  
      }

      hpT_R10_omni->Fill(R10_jets[0].pt(), omni_weight_test);
      hEEC_R10_omni->Fill(  GetEEC(R10_jets[0].constituents()), omni_weight_test);
      for (size_t i = 0; i < R10_lundz.size(); ++i) {
      hLund_z_R10_omni->Fill( R10_lundz[i], omni_weight_test) ; 
      hLund_dR_R10_omni->Fill( R10_lundDr[i], omni_weight_test) ; 
      hLund_plane_R10_omni->Fill( R10_lundDr[i] , R10_lundz[i], omni_weight_test);  
      }

      h_fracpT_ring->Fill(GetRing(R06_jets[0]));
      h_fracE_ring->Fill(0.);
      h_fracpT_ring_omni->Fill(GetRing(R06_jets[0]), omni_weight_test);
      h_fracE_ring_omni->Fill(0., omni_weight_test);   
   }


   std::cout << " === normalize histos === " << std::endl;
   normalizeHisto(hpT_R04); normalizeHisto(hpT_R06); normalizeHisto(hpT_R10);
   normalizeHisto(hEEC_R04); normalizeHisto(hEEC_R06); normalizeHisto(hEEC_R10);
   normalizeHisto(hLund_z_R04); normalizeHisto(hLund_z_R06); normalizeHisto(hLund_z_R10);
   normalizeHisto(hLund_dR_R04); normalizeHisto(hLund_dR_R06); normalizeHisto(hLund_dR_R10);
   normalizeHisto2D(hLund_plane_R04); normalizeHisto2D(hLund_plane_R06); normalizeHisto2D(hLund_plane_R10);
   normalizeHisto(h_fracpT_ring); normalizeHisto(h_fracE_ring);

   normalizeHisto(hpT_R04_omni); normalizeHisto(hpT_R06_omni); normalizeHisto(hpT_R10_omni);
   normalizeHisto(hEEC_R04_omni); normalizeHisto(hEEC_R06_omni); normalizeHisto(hEEC_R10_omni);
   normalizeHisto(hLund_z_R04_omni); normalizeHisto(hLund_z_R06_omni); normalizeHisto(hLund_z_R10_omni);
   normalizeHisto(hLund_dR_R04_omni); normalizeHisto(hLund_dR_R06_omni); normalizeHisto(hLund_dR_R10_omni);
   normalizeHisto2D(hLund_plane_R04_omni); normalizeHisto2D(hLund_plane_R06_omni); normalizeHisto2D(hLund_plane_R10_omni);
   normalizeHisto(h_fracpT_ring_omni); normalizeHisto(h_fracE_ring_omni);
   std::cout << " === y axis range for 1D histos === " << std::endl;
   YAxisRangeUserName(hpT_R04); YAxisRangeUserName(hpT_R06); YAxisRangeUserName(hpT_R10);
   YAxisRangeUserName(hEEC_R04); YAxisRangeUserName(hEEC_R06); YAxisRangeUserName(hEEC_R10);
   YAxisRangeUserName(hLund_z_R04); YAxisRangeUserName(hLund_z_R06); YAxisRangeUserName(hLund_z_R10);
   YAxisRangeUserName(h_fracpT_ring); YAxisRangeUserName(h_fracE_ring);

   YAxisRangeUserName(hpT_R04_omni); YAxisRangeUserName(hpT_R06_omni); YAxisRangeUserName(hpT_R10_omni);
   YAxisRangeUserName(hEEC_R04_omni); YAxisRangeUserName(hEEC_R06_omni); YAxisRangeUserName(hEEC_R10_omni);
   YAxisRangeUserName(hLund_z_R04_omni); YAxisRangeUserName(hLund_z_R06_omni); YAxisRangeUserName(hLund_z_R10_omni);
   YAxisRangeUserName(h_fracpT_ring_omni); YAxisRangeUserName(h_fracE_ring_omni);

   std::cout << " === create output ROOT file === " << std::endl;
   TFile* foutput = new TFile("out/output.root", "recreate");

   std::cout << " === write in file === " << std::endl;
   // R=0.4 jets
   hpT_R04->Write("hpT_R04");
   hEEC_R04->Write("hEEC_R04");
   hLund_z_R04->Write("hLund_z_R04");
   hLund_dR_R04->Write("hLund_dR_R04");
   hLund_plane_R04->Write("hLund_plane_R04");

   hpT_R04_omni->Write("hpT_R04_omni");
   hEEC_R04_omni->Write("hEEC_R04_omni");
   hLund_z_R04_omni->Write("hLund_z_R04_omni");
   hLund_dR_R04_omni->Write("hLund_dR_R04_omni");
   hLund_plane_R04_omni->Write("hLund_plane_R04_omni");

   // R=0.6 jets
   hpT_R06->Write("hpT_R06");
   hEEC_R06->Write("hEEC_R06");
   hLund_z_R06->Write("hLund_z_R06");
   hLund_dR_R06->Write("hLund_dR_R06");
   hLund_plane_R06->Write("hLund_plane_R06");

   hpT_R06_omni->Write("hpT_R06_omni");
   hEEC_R06_omni->Write("hEEC_R06_omni");
   hLund_z_R06_omni->Write("hLund_z_R06_omni");
   hLund_dR_R06_omni->Write("hLund_dR_R06_omni");
   hLund_plane_R06_omni->Write("hLund_plane_R06_omni");

   // R=1.0 jets
   hpT_R10->Write("hpT_R10");
   hEEC_R10->Write("hEEC_R10");
   hLund_z_R10->Write("hLund_z_R10");
   hLund_dR_R10->Write("hLund_dR_R10");
   hLund_plane_R10->Write("hLund_plane_R10");

   hpT_R10_omni->Write("hpT_R10_omni");
   hEEC_R10_omni->Write("hEEC_R10_omni");
   hLund_z_R10_omni->Write("hLund_z_R10_omni");
   hLund_dR_R10_omni->Write("hLund_dR_R10_omni");
   hLund_plane_R10_omni->Write("hLund_plane_R10_omni");
   // ring around 0.6
   h_fracpT_ring->Write("h_fracpT_ring");
   h_fracE_ring->Write("h_fracE_ring");
   h_fracpT_ring_omni->Write("h_fracpT_ring_omni");
   h_fracE_ring_omni->Write("h_fracE_ring_omni");
   foutput->Close();

}
