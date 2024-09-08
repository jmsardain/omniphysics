//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Sep  8 17:39:57 2024 by ROOT version 6.30/02
// from TTree OmniTree/
// found on file: /data/jmsardain/Zjets/data/WithTracks_TruthPseudodata_Mar12_Combined_1_40_shuffled.root
//////////////////////////////////////////////////////////

#ifndef MakeTruth_h
#define MakeTruth_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class MakeTruth {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Float_t         weight;
   Int_t           pass190;
   Int_t           truth_pass190;
   Float_t         weight_mc;
   Float_t         prw;
   Float_t         pT_ll;
   Float_t         pT_l1;
   Float_t         pT_l2;
   Float_t         eta_l1;
   Float_t         eta_l2;
   Float_t         phi_l1;
   Float_t         phi_l2;
   Float_t         y_ll;
   Float_t         pT_trackj1;
   Float_t         y_trackj1;
   Float_t         phi_trackj1;
   Float_t         m_trackj1;
   Float_t         tau1_trackj1;
   Float_t         tau2_trackj1;
   Float_t         tau3_trackj1;
   Float_t         pT_trackj2;
   Float_t         y_trackj2;
   Float_t         phi_trackj2;
   Float_t         m_trackj2;
   Float_t         tau1_trackj2;
   Float_t         tau2_trackj2;
   Float_t         tau3_trackj2;
   Float_t         truth_pT_ll;
   Float_t         truth_pT_l1;
   Float_t         truth_pT_l2;
   Float_t         truth_eta_l1;
   Float_t         truth_eta_l2;
   Float_t         truth_phi_l1;
   Float_t         truth_phi_l2;
   Float_t         truth_y_ll;
   Float_t         truth_pT_trackj1;
   Float_t         truth_y_trackj1;
   Float_t         truth_phi_trackj1;
   Float_t         truth_m_trackj1;
   Float_t         truth_tau1_trackj1;
   Float_t         truth_tau2_trackj1;
   Float_t         truth_tau3_trackj1;
   Float_t         truth_pT_trackj2;
   Float_t         truth_y_trackj2;
   Float_t         truth_phi_trackj2;
   Float_t         truth_m_trackj2;
   Float_t         truth_tau1_trackj2;
   Float_t         truth_tau2_trackj2;
   Float_t         truth_tau3_trackj2;
   Float_t         mu_recoSF;
   Float_t         mu_isoSF;
   Float_t         mu_TTVASF;
   Float_t         singleMuonTrigSF;
   Int_t           mcChannelNumber;
   Int_t           EventNumber;
   Int_t           RunNumber;
   Int_t           Ntracks;
   Int_t           Ntracks_trackj1;
   Int_t           Ntracks_trackj2;
   Int_t           NtrackJets20;
   Int_t           truth_Ntracks;
   Int_t           truth_Ntracks_trackj1;
   Int_t           truth_Ntracks_trackj2;
   Int_t           truth_NtrackJets20;
   Float_t         w_mc_orig;
   Float_t         w_orig;
   Int_t           npT_tracks;
   Double_t        pT_tracks[309];   //[npT_tracks]
   Int_t           neta_tracks;
   Double_t        eta_tracks[309];   //[neta_tracks]
   Int_t           nphi_tracks;
   Double_t        phi_tracks[309];   //[nphi_tracks]
   Int_t           ntrackJetIndex_tracks;
   Double_t        trackJetIndex_tracks[309];   //[ntrackJetIndex_tracks]
   Int_t           ntruth_pT_tracks;
   Double_t        truth_pT_tracks[323];   //[ntruth_pT_tracks]
   Int_t           ntruth_eta_tracks;
   Double_t        truth_eta_tracks[323];   //[ntruth_eta_tracks]
   Int_t           ntruth_phi_tracks;
   Double_t        truth_phi_tracks[323];   //[ntruth_phi_tracks]
   Int_t           ntruth_trackJetIndex_tracks;
   Double_t        truth_trackJetIndex_tracks[323];   //[ntruth_trackJetIndex_tracks]

   // List of branches
   TBranch        *b_weight;   //!
   TBranch        *b_pass190;   //!
   TBranch        *b_truth_pass190;   //!
   TBranch        *b_weight_mc;   //!
   TBranch        *b_prw;   //!
   TBranch        *b_pT_ll;   //!
   TBranch        *b_pT_l1;   //!
   TBranch        *b_pT_l2;   //!
   TBranch        *b_eta_l1;   //!
   TBranch        *b_eta_l2;   //!
   TBranch        *b_phi_l1;   //!
   TBranch        *b_phi_l2;   //!
   TBranch        *b_y_ll;   //!
   TBranch        *b_pT_trackj1;   //!
   TBranch        *b_y_trackj1;   //!
   TBranch        *b_phi_trackj1;   //!
   TBranch        *b_m_trackj1;   //!
   TBranch        *b_tau1_trackj1;   //!
   TBranch        *b_tau2_trackj1;   //!
   TBranch        *b_tau3_trackj1;   //!
   TBranch        *b_pT_trackj2;   //!
   TBranch        *b_y_trackj2;   //!
   TBranch        *b_phi_trackj2;   //!
   TBranch        *b_m_trackj2;   //!
   TBranch        *b_tau1_trackj2;   //!
   TBranch        *b_tau2_trackj2;   //!
   TBranch        *b_tau3_trackj2;   //!
   TBranch        *b_truth_pT_ll;   //!
   TBranch        *b_truth_pT_l1;   //!
   TBranch        *b_truth_pT_l2;   //!
   TBranch        *b_truth_eta_l1;   //!
   TBranch        *b_truth_eta_l2;   //!
   TBranch        *b_truth_phi_l1;   //!
   TBranch        *b_truth_phi_l2;   //!
   TBranch        *b_truth_y_ll;   //!
   TBranch        *b_truth_pT_trackj1;   //!
   TBranch        *b_truth_y_trackj1;   //!
   TBranch        *b_truth_phi_trackj1;   //!
   TBranch        *b_truth_m_trackj1;   //!
   TBranch        *b_truth_tau1_trackj1;   //!
   TBranch        *b_truth_tau2_trackj1;   //!
   TBranch        *b_truth_tau3_trackj1;   //!
   TBranch        *b_truth_pT_trackj2;   //!
   TBranch        *b_truth_y_trackj2;   //!
   TBranch        *b_truth_phi_trackj2;   //!
   TBranch        *b_truth_m_trackj2;   //!
   TBranch        *b_truth_tau1_trackj2;   //!
   TBranch        *b_truth_tau2_trackj2;   //!
   TBranch        *b_truth_tau3_trackj2;   //!
   TBranch        *b_mu_recoSF;   //!
   TBranch        *b_mu_isoSF;   //!
   TBranch        *b_mu_TTVASF;   //!
   TBranch        *b_singleMuonTrigSF;   //!
   TBranch        *b_mcChannelNumber;   //!
   TBranch        *b_EventNumber;   //!
   TBranch        *b_RunNumber;   //!
   TBranch        *b_Ntracks;   //!
   TBranch        *b_Ntracks_trackj1;   //!
   TBranch        *b_Ntracks_trackj2;   //!
   TBranch        *b_NtrackJets20;   //!
   TBranch        *b_truth_Ntracks;   //!
   TBranch        *b_truth_Ntracks_trackj1;   //!
   TBranch        *b_truth_Ntracks_trackj2;   //!
   TBranch        *b_truth_NtrackJets20;   //!
   TBranch        *b_w_mc_orig;   //!
   TBranch        *b_w_orig;   //!
   TBranch        *b_npT_tracks;   //!
   TBranch        *b_pT_tracks;   //!
   TBranch        *b_neta_tracks;   //!
   TBranch        *b_eta_tracks;   //!
   TBranch        *b_nphi_tracks;   //!
   TBranch        *b_phi_tracks;   //!
   TBranch        *b_ntrackJetIndex_tracks;   //!
   TBranch        *b_trackJetIndex_tracks;   //!
   TBranch        *b_ntruth_pT_tracks;   //!
   TBranch        *b_truth_pT_tracks;   //!
   TBranch        *b_ntruth_eta_tracks;   //!
   TBranch        *b_truth_eta_tracks;   //!
   TBranch        *b_ntruth_phi_tracks;   //!
   TBranch        *b_truth_phi_tracks;   //!
   TBranch        *b_ntruth_trackJetIndex_tracks;   //!
   TBranch        *b_truth_trackJetIndex_tracks;   //!

   MakeTruth(TTree *tree=0);
   virtual ~MakeTruth();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef MakeTruth_cxx
MakeTruth::MakeTruth(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/data/jmsardain/Zjets/data/WithTracks_TruthPseudodata_Mar12_Combined_1_40_shuffled.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/data/jmsardain/Zjets/data/WithTracks_TruthPseudodata_Mar12_Combined_1_40_shuffled.root");
      }
      f->GetObject("OmniTree",tree);

   }
   Init(tree);
}

MakeTruth::~MakeTruth()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t MakeTruth::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t MakeTruth::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void MakeTruth::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("weight", &weight, &b_weight);
   fChain->SetBranchAddress("pass190", &pass190, &b_pass190);
   fChain->SetBranchAddress("truth_pass190", &truth_pass190, &b_truth_pass190);
   fChain->SetBranchAddress("weight_mc", &weight_mc, &b_weight_mc);
   fChain->SetBranchAddress("prw", &prw, &b_prw);
   fChain->SetBranchAddress("pT_ll", &pT_ll, &b_pT_ll);
   fChain->SetBranchAddress("pT_l1", &pT_l1, &b_pT_l1);
   fChain->SetBranchAddress("pT_l2", &pT_l2, &b_pT_l2);
   fChain->SetBranchAddress("eta_l1", &eta_l1, &b_eta_l1);
   fChain->SetBranchAddress("eta_l2", &eta_l2, &b_eta_l2);
   fChain->SetBranchAddress("phi_l1", &phi_l1, &b_phi_l1);
   fChain->SetBranchAddress("phi_l2", &phi_l2, &b_phi_l2);
   fChain->SetBranchAddress("y_ll", &y_ll, &b_y_ll);
   fChain->SetBranchAddress("pT_trackj1", &pT_trackj1, &b_pT_trackj1);
   fChain->SetBranchAddress("y_trackj1", &y_trackj1, &b_y_trackj1);
   fChain->SetBranchAddress("phi_trackj1", &phi_trackj1, &b_phi_trackj1);
   fChain->SetBranchAddress("m_trackj1", &m_trackj1, &b_m_trackj1);
   fChain->SetBranchAddress("tau1_trackj1", &tau1_trackj1, &b_tau1_trackj1);
   fChain->SetBranchAddress("tau2_trackj1", &tau2_trackj1, &b_tau2_trackj1);
   fChain->SetBranchAddress("tau3_trackj1", &tau3_trackj1, &b_tau3_trackj1);
   fChain->SetBranchAddress("pT_trackj2", &pT_trackj2, &b_pT_trackj2);
   fChain->SetBranchAddress("y_trackj2", &y_trackj2, &b_y_trackj2);
   fChain->SetBranchAddress("phi_trackj2", &phi_trackj2, &b_phi_trackj2);
   fChain->SetBranchAddress("m_trackj2", &m_trackj2, &b_m_trackj2);
   fChain->SetBranchAddress("tau1_trackj2", &tau1_trackj2, &b_tau1_trackj2);
   fChain->SetBranchAddress("tau2_trackj2", &tau2_trackj2, &b_tau2_trackj2);
   fChain->SetBranchAddress("tau3_trackj2", &tau3_trackj2, &b_tau3_trackj2);
   fChain->SetBranchAddress("truth_pT_ll", &truth_pT_ll, &b_truth_pT_ll);
   fChain->SetBranchAddress("truth_pT_l1", &truth_pT_l1, &b_truth_pT_l1);
   fChain->SetBranchAddress("truth_pT_l2", &truth_pT_l2, &b_truth_pT_l2);
   fChain->SetBranchAddress("truth_eta_l1", &truth_eta_l1, &b_truth_eta_l1);
   fChain->SetBranchAddress("truth_eta_l2", &truth_eta_l2, &b_truth_eta_l2);
   fChain->SetBranchAddress("truth_phi_l1", &truth_phi_l1, &b_truth_phi_l1);
   fChain->SetBranchAddress("truth_phi_l2", &truth_phi_l2, &b_truth_phi_l2);
   fChain->SetBranchAddress("truth_y_ll", &truth_y_ll, &b_truth_y_ll);
   fChain->SetBranchAddress("truth_pT_trackj1", &truth_pT_trackj1, &b_truth_pT_trackj1);
   fChain->SetBranchAddress("truth_y_trackj1", &truth_y_trackj1, &b_truth_y_trackj1);
   fChain->SetBranchAddress("truth_phi_trackj1", &truth_phi_trackj1, &b_truth_phi_trackj1);
   fChain->SetBranchAddress("truth_m_trackj1", &truth_m_trackj1, &b_truth_m_trackj1);
   fChain->SetBranchAddress("truth_tau1_trackj1", &truth_tau1_trackj1, &b_truth_tau1_trackj1);
   fChain->SetBranchAddress("truth_tau2_trackj1", &truth_tau2_trackj1, &b_truth_tau2_trackj1);
   fChain->SetBranchAddress("truth_tau3_trackj1", &truth_tau3_trackj1, &b_truth_tau3_trackj1);
   fChain->SetBranchAddress("truth_pT_trackj2", &truth_pT_trackj2, &b_truth_pT_trackj2);
   fChain->SetBranchAddress("truth_y_trackj2", &truth_y_trackj2, &b_truth_y_trackj2);
   fChain->SetBranchAddress("truth_phi_trackj2", &truth_phi_trackj2, &b_truth_phi_trackj2);
   fChain->SetBranchAddress("truth_m_trackj2", &truth_m_trackj2, &b_truth_m_trackj2);
   fChain->SetBranchAddress("truth_tau1_trackj2", &truth_tau1_trackj2, &b_truth_tau1_trackj2);
   fChain->SetBranchAddress("truth_tau2_trackj2", &truth_tau2_trackj2, &b_truth_tau2_trackj2);
   fChain->SetBranchAddress("truth_tau3_trackj2", &truth_tau3_trackj2, &b_truth_tau3_trackj2);
   fChain->SetBranchAddress("mu_recoSF", &mu_recoSF, &b_mu_recoSF);
   fChain->SetBranchAddress("mu_isoSF", &mu_isoSF, &b_mu_isoSF);
   fChain->SetBranchAddress("mu_TTVASF", &mu_TTVASF, &b_mu_TTVASF);
   fChain->SetBranchAddress("singleMuonTrigSF", &singleMuonTrigSF, &b_singleMuonTrigSF);
   fChain->SetBranchAddress("mcChannelNumber", &mcChannelNumber, &b_mcChannelNumber);
   fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
   fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
   fChain->SetBranchAddress("Ntracks", &Ntracks, &b_Ntracks);
   fChain->SetBranchAddress("Ntracks_trackj1", &Ntracks_trackj1, &b_Ntracks_trackj1);
   fChain->SetBranchAddress("Ntracks_trackj2", &Ntracks_trackj2, &b_Ntracks_trackj2);
   fChain->SetBranchAddress("NtrackJets20", &NtrackJets20, &b_NtrackJets20);
   fChain->SetBranchAddress("truth_Ntracks", &truth_Ntracks, &b_truth_Ntracks);
   fChain->SetBranchAddress("truth_Ntracks_trackj1", &truth_Ntracks_trackj1, &b_truth_Ntracks_trackj1);
   fChain->SetBranchAddress("truth_Ntracks_trackj2", &truth_Ntracks_trackj2, &b_truth_Ntracks_trackj2);
   fChain->SetBranchAddress("truth_NtrackJets20", &truth_NtrackJets20, &b_truth_NtrackJets20);
   fChain->SetBranchAddress("w_mc_orig", &w_mc_orig, &b_w_mc_orig);
   fChain->SetBranchAddress("w_orig", &w_orig, &b_w_orig);
   fChain->SetBranchAddress("npT_tracks", &npT_tracks, &b_npT_tracks);
   fChain->SetBranchAddress("pT_tracks", pT_tracks, &b_pT_tracks);
   fChain->SetBranchAddress("neta_tracks", &neta_tracks, &b_neta_tracks);
   fChain->SetBranchAddress("eta_tracks", eta_tracks, &b_eta_tracks);
   fChain->SetBranchAddress("nphi_tracks", &nphi_tracks, &b_nphi_tracks);
   fChain->SetBranchAddress("phi_tracks", phi_tracks, &b_phi_tracks);
   fChain->SetBranchAddress("ntrackJetIndex_tracks", &ntrackJetIndex_tracks, &b_ntrackJetIndex_tracks);
   fChain->SetBranchAddress("trackJetIndex_tracks", trackJetIndex_tracks, &b_trackJetIndex_tracks);
   fChain->SetBranchAddress("ntruth_pT_tracks", &ntruth_pT_tracks, &b_ntruth_pT_tracks);
   fChain->SetBranchAddress("truth_pT_tracks", truth_pT_tracks, &b_truth_pT_tracks);
   fChain->SetBranchAddress("ntruth_eta_tracks", &ntruth_eta_tracks, &b_ntruth_eta_tracks);
   fChain->SetBranchAddress("truth_eta_tracks", truth_eta_tracks, &b_truth_eta_tracks);
   fChain->SetBranchAddress("ntruth_phi_tracks", &ntruth_phi_tracks, &b_ntruth_phi_tracks);
   fChain->SetBranchAddress("truth_phi_tracks", truth_phi_tracks, &b_truth_phi_tracks);
   fChain->SetBranchAddress("ntruth_trackJetIndex_tracks", &ntruth_trackJetIndex_tracks, &b_ntruth_trackJetIndex_tracks);
   fChain->SetBranchAddress("truth_trackJetIndex_tracks", truth_trackJetIndex_tracks, &b_truth_trackJetIndex_tracks);
   Notify();
}

Bool_t MakeTruth::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void MakeTruth::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t MakeTruth::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef MakeTruth_cxx
