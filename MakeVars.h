//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Sep  5 12:05:18 2024 by ROOT version 6.30/02
// from TTree OmniTree/
// found on file: tmp_mc.root
//////////////////////////////////////////////////////////

#ifndef MakeVars_h
#define MakeVars_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <vector>
// Header file for the classes stored in the TTree if any.

class MakeVars {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Float_t         weight;
   Int_t           pass190;
   Int_t           truth_pass190;
   Float_t         weight_mc;
   Int_t           pass190_syst_ID_Up;
   Int_t           pass190_syst_ID_Down;
   Int_t           pass190_syst_MS_Up;
   Int_t           pass190_syst_MS_Down;
   Int_t           pass190_syst_MSResbias_Up;
   Int_t           pass190_syst_MSResbias_Down;
   Int_t           pass190_syst_MSRho_Up;
   Int_t           pass190_syst_MSRho_Down;
   Int_t           pass190_syst_Scale_Up;
   Int_t           pass190_syst_Scale_Down;
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
   Float_t         syst_prwUp;
   Float_t         syst_prwDown;
   Float_t         syst_recoSFUp;
   Float_t         syst_recoSFDown;
   Float_t         syst_isoSFUp;
   Float_t         syst_isoSFDown;
   Float_t         syst_TTVASFUp;
   Float_t         syst_TTVASFDown;
   Float_t         syst_trigSFUp;
   Float_t         syst_trigSFDown;
   Float_t         syst_pT_l1_ID_Up;
   Float_t         syst_pT_l1_ID_Down;
   Float_t         syst_pT_l2_ID_Up;
   Float_t         syst_pT_l2_ID_Down;
   Float_t         syst_pT_l1_MS_Up;
   Float_t         syst_pT_l1_MS_Down;
   Float_t         syst_pT_l2_MS_Up;
   Float_t         syst_pT_l2_MS_Down;
   Float_t         syst_pT_l1_MSResbias_Up;
   Float_t         syst_pT_l1_MSResbias_Down;
   Float_t         syst_pT_l2_MSResbias_Up;
   Float_t         syst_pT_l2_MSResbias_Down;
   Float_t         syst_pT_l1_MSRho_Up;
   Float_t         syst_pT_l1_MSRho_Down;
   Float_t         syst_pT_l2_MSRho_Up;
   Float_t         syst_pT_l2_MSRho_Down;
   Float_t         syst_pT_l1_Scale_Up;
   Float_t         syst_pT_l1_Scale_Down;
   Float_t         syst_pT_l2_Scale_Up;
   Float_t         syst_pT_l2_Scale_Down;
   Float_t         syst_pT_ll_ID_Up;
   Float_t         syst_pT_ll_ID_Down;
   Float_t         syst_pT_ll_MS_Up;
   Float_t         syst_pT_ll_MS_Down;
   Float_t         syst_pT_ll_MSResbias_Up;
   Float_t         syst_pT_ll_MSResbias_Down;
   Float_t         syst_pT_ll_MSRho_Up;
   Float_t         syst_pT_ll_MSRho_Down;
   Float_t         syst_pT_ll_Scale_Up;
   Float_t         syst_pT_ll_Scale_Down;
   Float_t         syst_m_ll_ID_Up;
   Float_t         syst_m_ll_ID_Down;
   Float_t         syst_m_ll_MS_Up;
   Float_t         syst_m_ll_MS_Down;
   Float_t         syst_m_ll_MSResbias_Up;
   Float_t         syst_m_ll_MSResbias_Down;
   Float_t         syst_m_ll_MSRho_Up;
   Float_t         syst_m_ll_MSRho_Down;
   Float_t         syst_m_ll_Scale_Up;
   Float_t         syst_m_ll_Scale_Down;
   Float_t         syst_y_ll_ID_Up;
   Float_t         syst_y_ll_ID_Down;
   Float_t         syst_y_ll_MS_Up;
   Float_t         syst_y_ll_MS_Down;
   Float_t         syst_y_ll_MSResbias_Up;
   Float_t         syst_y_ll_MSResbias_Down;
   Float_t         syst_y_ll_MSRho_Up;
   Float_t         syst_y_ll_MSRho_Down;
   Float_t         syst_y_ll_Scale_Up;
   Float_t         syst_y_ll_Scale_Down;
   Float_t         syst_TrackFilter_pT_trackj1;
   Float_t         syst_TrackFilter_y_trackj1;
   Float_t         syst_TrackFilter_phi_trackj1;
   Float_t         syst_TrackFilter_m_trackj1;
   Float_t         syst_TrackFilter_tau1_trackj1;
   Float_t         syst_TrackFilter_tau2_trackj1;
   Float_t         syst_TrackFilter_tau3_trackj1;
   Float_t         syst_TrackFilter_pT_trackj2;
   Float_t         syst_TrackFilter_y_trackj2;
   Float_t         syst_TrackFilter_phi_trackj2;
   Float_t         syst_TrackFilter_m_trackj2;
   Float_t         syst_TrackFilter_tau1_trackj2;
   Float_t         syst_TrackFilter_tau2_trackj2;
   Float_t         syst_TrackFilter_tau3_trackj2;
   Float_t         syst_JetTrackFilter_pT_trackj1;
   Float_t         syst_JetTrackFilter_y_trackj1;
   Float_t         syst_JetTrackFilter_phi_trackj1;
   Float_t         syst_JetTrackFilter_m_trackj1;
   Float_t         syst_JetTrackFilter_tau1_trackj1;
   Float_t         syst_JetTrackFilter_tau2_trackj1;
   Float_t         syst_JetTrackFilter_tau3_trackj1;
   Float_t         syst_JetTrackFilter_pT_trackj2;
   Float_t         syst_JetTrackFilter_y_trackj2;
   Float_t         syst_JetTrackFilter_phi_trackj2;
   Float_t         syst_JetTrackFilter_m_trackj2;
   Float_t         syst_JetTrackFilter_tau1_trackj2;
   Float_t         syst_JetTrackFilter_tau2_trackj2;
   Float_t         syst_JetTrackFilter_tau3_trackj2;
   Float_t         syst_Fake_pT_trackj1;
   Float_t         syst_Fake_y_trackj1;
   Float_t         syst_Fake_phi_trackj1;
   Float_t         syst_Fake_m_trackj1;
   Float_t         syst_Fake_tau1_trackj1;
   Float_t         syst_Fake_tau2_trackj1;
   Float_t         syst_Fake_tau3_trackj1;
   Float_t         syst_Fake_pT_trackj2;
   Float_t         syst_Fake_y_trackj2;
   Float_t         syst_Fake_phi_trackj2;
   Float_t         syst_Fake_m_trackj2;
   Float_t         syst_Fake_tau1_trackj2;
   Float_t         syst_Fake_tau2_trackj2;
   Float_t         syst_Fake_tau3_trackj2;
   Float_t         syst_pTScale_pT_trackj1;
   Float_t         syst_pTScale_y_trackj1;
   Float_t         syst_pTScale_phi_trackj1;
   Float_t         syst_pTScale_m_trackj1;
   Float_t         syst_pTScale_tau1_trackj1;
   Float_t         syst_pTScale_tau2_trackj1;
   Float_t         syst_pTScale_tau3_trackj1;
   Float_t         syst_pTScale_pT_trackj2;
   Float_t         syst_pTScale_y_trackj2;
   Float_t         syst_pTScale_phi_trackj2;
   Float_t         syst_pTScale_m_trackj2;
   Float_t         syst_pTScale_tau1_trackj2;
   Float_t         syst_pTScale_tau2_trackj2;
   Float_t         syst_pTScale_tau3_trackj2;
   Int_t           mcChannelNumber;
   Int_t           syst_TrackFilter_Ntracks_trackj1;
   Int_t           syst_TrackFilter_Ntracks_trackj2;
   Int_t           syst_JetTrackFilter_Ntracks_trackj1;
   Int_t           syst_JetTrackFilter_Ntracks_trackj2;
   Int_t           syst_Fake_Ntracks_trackj1;
   Int_t           syst_Fake_Ntracks_trackj2;
   Int_t           syst_pTScale_Ntracks_trackj1;
   Int_t           syst_pTScale_Ntracks_trackj2;
   Int_t           syst_TrackFilter_NtrackJets20;
   Int_t           syst_JetTrackFilter_NtrackJets20;
   Int_t           syst_Fake_NtrackJets20;
   Int_t           syst_pTScale_NtrackJets20;
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
   Int_t           nweight_bs;
   Int_t           weight_bs[100];   //[nweight_bs]
   Int_t           npT_tracks;
   Float_t         pT_tracks[250];   //[npT_tracks]
   Int_t           neta_tracks;
   Float_t         eta_tracks[250];   //[neta_tracks]
   Int_t           nphi_tracks;
   Float_t         phi_tracks[250];   //[nphi_tracks]
   Int_t           ntrackJetIndex_tracks;
   Float_t         trackJetIndex_tracks[250];   //[ntrackJetIndex_tracks]
   Int_t           ntruth_pT_tracks;
   Float_t         truth_pT_tracks[278];   //[ntruth_pT_tracks]
   Int_t           ntruth_eta_tracks;
   Float_t         truth_eta_tracks[278];   //[ntruth_eta_tracks]
   Int_t           ntruth_phi_tracks;
   Float_t         truth_phi_tracks[278];   //[ntruth_phi_tracks]
   Int_t           ntruth_trackJetIndex_tracks;
   Float_t         truth_trackJetIndex_tracks[278];   //[ntruth_trackJetIndex_tracks]
   Float_t         omni_weight_test;

   // List of branches
   TBranch        *b_weight;   //!
   TBranch        *b_pass190;   //!
   TBranch        *b_truth_pass190;   //!
   TBranch        *b_weight_mc;   //!
   TBranch        *b_pass190_syst_ID_Up;   //!
   TBranch        *b_pass190_syst_ID_Down;   //!
   TBranch        *b_pass190_syst_MS_Up;   //!
   TBranch        *b_pass190_syst_MS_Down;   //!
   TBranch        *b_pass190_syst_MSResbias_Up;   //!
   TBranch        *b_pass190_syst_MSResbias_Down;   //!
   TBranch        *b_pass190_syst_MSRho_Up;   //!
   TBranch        *b_pass190_syst_MSRho_Down;   //!
   TBranch        *b_pass190_syst_Scale_Up;   //!
   TBranch        *b_pass190_syst_Scale_Down;   //!
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
   TBranch        *b_syst_prwUp;   //!
   TBranch        *b_syst_prwDown;   //!
   TBranch        *b_syst_recoSFUp;   //!
   TBranch        *b_syst_recoSFDown;   //!
   TBranch        *b_syst_isoSFUp;   //!
   TBranch        *b_syst_isoSFDown;   //!
   TBranch        *b_syst_TTVASFUp;   //!
   TBranch        *b_syst_TTVASFDown;   //!
   TBranch        *b_syst_trigSFUp;   //!
   TBranch        *b_syst_trigSFDown;   //!
   TBranch        *b_syst_pT_l1_ID_Up;   //!
   TBranch        *b_syst_pT_l1_ID_Down;   //!
   TBranch        *b_syst_pT_l2_ID_Up;   //!
   TBranch        *b_syst_pT_l2_ID_Down;   //!
   TBranch        *b_syst_pT_l1_MS_Up;   //!
   TBranch        *b_syst_pT_l1_MS_Down;   //!
   TBranch        *b_syst_pT_l2_MS_Up;   //!
   TBranch        *b_syst_pT_l2_MS_Down;   //!
   TBranch        *b_syst_pT_l1_MSResbias_Up;   //!
   TBranch        *b_syst_pT_l1_MSResbias_Down;   //!
   TBranch        *b_syst_pT_l2_MSResbias_Up;   //!
   TBranch        *b_syst_pT_l2_MSResbias_Down;   //!
   TBranch        *b_syst_pT_l1_MSRho_Up;   //!
   TBranch        *b_syst_pT_l1_MSRho_Down;   //!
   TBranch        *b_syst_pT_l2_MSRho_Up;   //!
   TBranch        *b_syst_pT_l2_MSRho_Down;   //!
   TBranch        *b_syst_pT_l1_Scale_Up;   //!
   TBranch        *b_syst_pT_l1_Scale_Down;   //!
   TBranch        *b_syst_pT_l2_Scale_Up;   //!
   TBranch        *b_syst_pT_l2_Scale_Down;   //!
   TBranch        *b_syst_pT_ll_ID_Up;   //!
   TBranch        *b_syst_pT_ll_ID_Down;   //!
   TBranch        *b_syst_pT_ll_MS_Up;   //!
   TBranch        *b_syst_pT_ll_MS_Down;   //!
   TBranch        *b_syst_pT_ll_MSResbias_Up;   //!
   TBranch        *b_syst_pT_ll_MSResbias_Down;   //!
   TBranch        *b_syst_pT_ll_MSRho_Up;   //!
   TBranch        *b_syst_pT_ll_MSRho_Down;   //!
   TBranch        *b_syst_pT_ll_Scale_Up;   //!
   TBranch        *b_syst_pT_ll_Scale_Down;   //!
   TBranch        *b_syst_m_ll_ID_Up;   //!
   TBranch        *b_syst_m_ll_ID_Down;   //!
   TBranch        *b_syst_m_ll_MS_Up;   //!
   TBranch        *b_syst_m_ll_MS_Down;   //!
   TBranch        *b_syst_m_ll_MSResbias_Up;   //!
   TBranch        *b_syst_m_ll_MSResbias_Down;   //!
   TBranch        *b_syst_m_ll_MSRho_Up;   //!
   TBranch        *b_syst_m_ll_MSRho_Down;   //!
   TBranch        *b_syst_m_ll_Scale_Up;   //!
   TBranch        *b_syst_m_ll_Scale_Down;   //!
   TBranch        *b_syst_y_ll_ID_Up;   //!
   TBranch        *b_syst_y_ll_ID_Down;   //!
   TBranch        *b_syst_y_ll_MS_Up;   //!
   TBranch        *b_syst_y_ll_MS_Down;   //!
   TBranch        *b_syst_y_ll_MSResbias_Up;   //!
   TBranch        *b_syst_y_ll_MSResbias_Down;   //!
   TBranch        *b_syst_y_ll_MSRho_Up;   //!
   TBranch        *b_syst_y_ll_MSRho_Down;   //!
   TBranch        *b_syst_y_ll_Scale_Up;   //!
   TBranch        *b_syst_y_ll_Scale_Down;   //!
   TBranch        *b_syst_TrackFilter_pT_trackj1;   //!
   TBranch        *b_syst_TrackFilter_y_trackj1;   //!
   TBranch        *b_syst_TrackFilter_phi_trackj1;   //!
   TBranch        *b_syst_TrackFilter_m_trackj1;   //!
   TBranch        *b_syst_TrackFilter_tau1_trackj1;   //!
   TBranch        *b_syst_TrackFilter_tau2_trackj1;   //!
   TBranch        *b_syst_TrackFilter_tau3_trackj1;   //!
   TBranch        *b_syst_TrackFilter_pT_trackj2;   //!
   TBranch        *b_syst_TrackFilter_y_trackj2;   //!
   TBranch        *b_syst_TrackFilter_phi_trackj2;   //!
   TBranch        *b_syst_TrackFilter_m_trackj2;   //!
   TBranch        *b_syst_TrackFilter_tau1_trackj2;   //!
   TBranch        *b_syst_TrackFilter_tau2_trackj2;   //!
   TBranch        *b_syst_TrackFilter_tau3_trackj2;   //!
   TBranch        *b_syst_JetTrackFilter_pT_trackj1;   //!
   TBranch        *b_syst_JetTrackFilter_y_trackj1;   //!
   TBranch        *b_syst_JetTrackFilter_phi_trackj1;   //!
   TBranch        *b_syst_JetTrackFilter_m_trackj1;   //!
   TBranch        *b_syst_JetTrackFilter_tau1_trackj1;   //!
   TBranch        *b_syst_JetTrackFilter_tau2_trackj1;   //!
   TBranch        *b_syst_JetTrackFilter_tau3_trackj1;   //!
   TBranch        *b_syst_JetTrackFilter_pT_trackj2;   //!
   TBranch        *b_syst_JetTrackFilter_y_trackj2;   //!
   TBranch        *b_syst_JetTrackFilter_phi_trackj2;   //!
   TBranch        *b_syst_JetTrackFilter_m_trackj2;   //!
   TBranch        *b_syst_JetTrackFilter_tau1_trackj2;   //!
   TBranch        *b_syst_JetTrackFilter_tau2_trackj2;   //!
   TBranch        *b_syst_JetTrackFilter_tau3_trackj2;   //!
   TBranch        *b_syst_Fake_pT_trackj1;   //!
   TBranch        *b_syst_Fake_y_trackj1;   //!
   TBranch        *b_syst_Fake_phi_trackj1;   //!
   TBranch        *b_syst_Fake_m_trackj1;   //!
   TBranch        *b_syst_Fake_tau1_trackj1;   //!
   TBranch        *b_syst_Fake_tau2_trackj1;   //!
   TBranch        *b_syst_Fake_tau3_trackj1;   //!
   TBranch        *b_syst_Fake_pT_trackj2;   //!
   TBranch        *b_syst_Fake_y_trackj2;   //!
   TBranch        *b_syst_Fake_phi_trackj2;   //!
   TBranch        *b_syst_Fake_m_trackj2;   //!
   TBranch        *b_syst_Fake_tau1_trackj2;   //!
   TBranch        *b_syst_Fake_tau2_trackj2;   //!
   TBranch        *b_syst_Fake_tau3_trackj2;   //!
   TBranch        *b_syst_pTScale_pT_trackj1;   //!
   TBranch        *b_syst_pTScale_y_trackj1;   //!
   TBranch        *b_syst_pTScale_phi_trackj1;   //!
   TBranch        *b_syst_pTScale_m_trackj1;   //!
   TBranch        *b_syst_pTScale_tau1_trackj1;   //!
   TBranch        *b_syst_pTScale_tau2_trackj1;   //!
   TBranch        *b_syst_pTScale_tau3_trackj1;   //!
   TBranch        *b_syst_pTScale_pT_trackj2;   //!
   TBranch        *b_syst_pTScale_y_trackj2;   //!
   TBranch        *b_syst_pTScale_phi_trackj2;   //!
   TBranch        *b_syst_pTScale_m_trackj2;   //!
   TBranch        *b_syst_pTScale_tau1_trackj2;   //!
   TBranch        *b_syst_pTScale_tau2_trackj2;   //!
   TBranch        *b_syst_pTScale_tau3_trackj2;   //!
   TBranch        *b_mcChannelNumber;   //!
   TBranch        *b_syst_TrackFilter_Ntracks_trackj1;   //!
   TBranch        *b_syst_TrackFilter_Ntracks_trackj2;   //!
   TBranch        *b_syst_JetTrackFilter_Ntracks_trackj1;   //!
   TBranch        *b_syst_JetTrackFilter_Ntracks_trackj2;   //!
   TBranch        *b_syst_Fake_Ntracks_trackj1;   //!
   TBranch        *b_syst_Fake_Ntracks_trackj2;   //!
   TBranch        *b_syst_pTScale_Ntracks_trackj1;   //!
   TBranch        *b_syst_pTScale_Ntracks_trackj2;   //!
   TBranch        *b_syst_TrackFilter_NtrackJets20;   //!
   TBranch        *b_syst_JetTrackFilter_NtrackJets20;   //!
   TBranch        *b_syst_Fake_NtrackJets20;   //!
   TBranch        *b_syst_pTScale_NtrackJets20;   //!
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
   TBranch        *b_nweight_bs;   //!
   TBranch        *b_weight_bs;   //!
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
   TBranch        *b_omni_weight_test;   //!

   MakeVars(TTree *tree=0);
   virtual ~MakeVars();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef MakeVars_cxx
MakeVars::MakeVars(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("tmp_mc.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("tmp_mc.root");
      }
      f->GetObject("OmniTree",tree);

   }
   Init(tree);
}

MakeVars::~MakeVars()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t MakeVars::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t MakeVars::LoadTree(Long64_t entry)
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

void MakeVars::Init(TTree *tree)
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
   fChain->SetBranchAddress("pass190_syst_ID_Up", &pass190_syst_ID_Up, &b_pass190_syst_ID_Up);
   fChain->SetBranchAddress("pass190_syst_ID_Down", &pass190_syst_ID_Down, &b_pass190_syst_ID_Down);
   fChain->SetBranchAddress("pass190_syst_MS_Up", &pass190_syst_MS_Up, &b_pass190_syst_MS_Up);
   fChain->SetBranchAddress("pass190_syst_MS_Down", &pass190_syst_MS_Down, &b_pass190_syst_MS_Down);
   fChain->SetBranchAddress("pass190_syst_MSResbias_Up", &pass190_syst_MSResbias_Up, &b_pass190_syst_MSResbias_Up);
   fChain->SetBranchAddress("pass190_syst_MSResbias_Down", &pass190_syst_MSResbias_Down, &b_pass190_syst_MSResbias_Down);
   fChain->SetBranchAddress("pass190_syst_MSRho_Up", &pass190_syst_MSRho_Up, &b_pass190_syst_MSRho_Up);
   fChain->SetBranchAddress("pass190_syst_MSRho_Down", &pass190_syst_MSRho_Down, &b_pass190_syst_MSRho_Down);
   fChain->SetBranchAddress("pass190_syst_Scale_Up", &pass190_syst_Scale_Up, &b_pass190_syst_Scale_Up);
   fChain->SetBranchAddress("pass190_syst_Scale_Down", &pass190_syst_Scale_Down, &b_pass190_syst_Scale_Down);
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
   fChain->SetBranchAddress("syst_prwUp", &syst_prwUp, &b_syst_prwUp);
   fChain->SetBranchAddress("syst_prwDown", &syst_prwDown, &b_syst_prwDown);
   fChain->SetBranchAddress("syst_recoSFUp", &syst_recoSFUp, &b_syst_recoSFUp);
   fChain->SetBranchAddress("syst_recoSFDown", &syst_recoSFDown, &b_syst_recoSFDown);
   fChain->SetBranchAddress("syst_isoSFUp", &syst_isoSFUp, &b_syst_isoSFUp);
   fChain->SetBranchAddress("syst_isoSFDown", &syst_isoSFDown, &b_syst_isoSFDown);
   fChain->SetBranchAddress("syst_TTVASFUp", &syst_TTVASFUp, &b_syst_TTVASFUp);
   fChain->SetBranchAddress("syst_TTVASFDown", &syst_TTVASFDown, &b_syst_TTVASFDown);
   fChain->SetBranchAddress("syst_trigSFUp", &syst_trigSFUp, &b_syst_trigSFUp);
   fChain->SetBranchAddress("syst_trigSFDown", &syst_trigSFDown, &b_syst_trigSFDown);
   fChain->SetBranchAddress("syst_pT_l1_ID_Up", &syst_pT_l1_ID_Up, &b_syst_pT_l1_ID_Up);
   fChain->SetBranchAddress("syst_pT_l1_ID_Down", &syst_pT_l1_ID_Down, &b_syst_pT_l1_ID_Down);
   fChain->SetBranchAddress("syst_pT_l2_ID_Up", &syst_pT_l2_ID_Up, &b_syst_pT_l2_ID_Up);
   fChain->SetBranchAddress("syst_pT_l2_ID_Down", &syst_pT_l2_ID_Down, &b_syst_pT_l2_ID_Down);
   fChain->SetBranchAddress("syst_pT_l1_MS_Up", &syst_pT_l1_MS_Up, &b_syst_pT_l1_MS_Up);
   fChain->SetBranchAddress("syst_pT_l1_MS_Down", &syst_pT_l1_MS_Down, &b_syst_pT_l1_MS_Down);
   fChain->SetBranchAddress("syst_pT_l2_MS_Up", &syst_pT_l2_MS_Up, &b_syst_pT_l2_MS_Up);
   fChain->SetBranchAddress("syst_pT_l2_MS_Down", &syst_pT_l2_MS_Down, &b_syst_pT_l2_MS_Down);
   fChain->SetBranchAddress("syst_pT_l1_MSResbias_Up", &syst_pT_l1_MSResbias_Up, &b_syst_pT_l1_MSResbias_Up);
   fChain->SetBranchAddress("syst_pT_l1_MSResbias_Down", &syst_pT_l1_MSResbias_Down, &b_syst_pT_l1_MSResbias_Down);
   fChain->SetBranchAddress("syst_pT_l2_MSResbias_Up", &syst_pT_l2_MSResbias_Up, &b_syst_pT_l2_MSResbias_Up);
   fChain->SetBranchAddress("syst_pT_l2_MSResbias_Down", &syst_pT_l2_MSResbias_Down, &b_syst_pT_l2_MSResbias_Down);
   fChain->SetBranchAddress("syst_pT_l1_MSRho_Up", &syst_pT_l1_MSRho_Up, &b_syst_pT_l1_MSRho_Up);
   fChain->SetBranchAddress("syst_pT_l1_MSRho_Down", &syst_pT_l1_MSRho_Down, &b_syst_pT_l1_MSRho_Down);
   fChain->SetBranchAddress("syst_pT_l2_MSRho_Up", &syst_pT_l2_MSRho_Up, &b_syst_pT_l2_MSRho_Up);
   fChain->SetBranchAddress("syst_pT_l2_MSRho_Down", &syst_pT_l2_MSRho_Down, &b_syst_pT_l2_MSRho_Down);
   fChain->SetBranchAddress("syst_pT_l1_Scale_Up", &syst_pT_l1_Scale_Up, &b_syst_pT_l1_Scale_Up);
   fChain->SetBranchAddress("syst_pT_l1_Scale_Down", &syst_pT_l1_Scale_Down, &b_syst_pT_l1_Scale_Down);
   fChain->SetBranchAddress("syst_pT_l2_Scale_Up", &syst_pT_l2_Scale_Up, &b_syst_pT_l2_Scale_Up);
   fChain->SetBranchAddress("syst_pT_l2_Scale_Down", &syst_pT_l2_Scale_Down, &b_syst_pT_l2_Scale_Down);
   fChain->SetBranchAddress("syst_pT_ll_ID_Up", &syst_pT_ll_ID_Up, &b_syst_pT_ll_ID_Up);
   fChain->SetBranchAddress("syst_pT_ll_ID_Down", &syst_pT_ll_ID_Down, &b_syst_pT_ll_ID_Down);
   fChain->SetBranchAddress("syst_pT_ll_MS_Up", &syst_pT_ll_MS_Up, &b_syst_pT_ll_MS_Up);
   fChain->SetBranchAddress("syst_pT_ll_MS_Down", &syst_pT_ll_MS_Down, &b_syst_pT_ll_MS_Down);
   fChain->SetBranchAddress("syst_pT_ll_MSResbias_Up", &syst_pT_ll_MSResbias_Up, &b_syst_pT_ll_MSResbias_Up);
   fChain->SetBranchAddress("syst_pT_ll_MSResbias_Down", &syst_pT_ll_MSResbias_Down, &b_syst_pT_ll_MSResbias_Down);
   fChain->SetBranchAddress("syst_pT_ll_MSRho_Up", &syst_pT_ll_MSRho_Up, &b_syst_pT_ll_MSRho_Up);
   fChain->SetBranchAddress("syst_pT_ll_MSRho_Down", &syst_pT_ll_MSRho_Down, &b_syst_pT_ll_MSRho_Down);
   fChain->SetBranchAddress("syst_pT_ll_Scale_Up", &syst_pT_ll_Scale_Up, &b_syst_pT_ll_Scale_Up);
   fChain->SetBranchAddress("syst_pT_ll_Scale_Down", &syst_pT_ll_Scale_Down, &b_syst_pT_ll_Scale_Down);
   fChain->SetBranchAddress("syst_m_ll_ID_Up", &syst_m_ll_ID_Up, &b_syst_m_ll_ID_Up);
   fChain->SetBranchAddress("syst_m_ll_ID_Down", &syst_m_ll_ID_Down, &b_syst_m_ll_ID_Down);
   fChain->SetBranchAddress("syst_m_ll_MS_Up", &syst_m_ll_MS_Up, &b_syst_m_ll_MS_Up);
   fChain->SetBranchAddress("syst_m_ll_MS_Down", &syst_m_ll_MS_Down, &b_syst_m_ll_MS_Down);
   fChain->SetBranchAddress("syst_m_ll_MSResbias_Up", &syst_m_ll_MSResbias_Up, &b_syst_m_ll_MSResbias_Up);
   fChain->SetBranchAddress("syst_m_ll_MSResbias_Down", &syst_m_ll_MSResbias_Down, &b_syst_m_ll_MSResbias_Down);
   fChain->SetBranchAddress("syst_m_ll_MSRho_Up", &syst_m_ll_MSRho_Up, &b_syst_m_ll_MSRho_Up);
   fChain->SetBranchAddress("syst_m_ll_MSRho_Down", &syst_m_ll_MSRho_Down, &b_syst_m_ll_MSRho_Down);
   fChain->SetBranchAddress("syst_m_ll_Scale_Up", &syst_m_ll_Scale_Up, &b_syst_m_ll_Scale_Up);
   fChain->SetBranchAddress("syst_m_ll_Scale_Down", &syst_m_ll_Scale_Down, &b_syst_m_ll_Scale_Down);
   fChain->SetBranchAddress("syst_y_ll_ID_Up", &syst_y_ll_ID_Up, &b_syst_y_ll_ID_Up);
   fChain->SetBranchAddress("syst_y_ll_ID_Down", &syst_y_ll_ID_Down, &b_syst_y_ll_ID_Down);
   fChain->SetBranchAddress("syst_y_ll_MS_Up", &syst_y_ll_MS_Up, &b_syst_y_ll_MS_Up);
   fChain->SetBranchAddress("syst_y_ll_MS_Down", &syst_y_ll_MS_Down, &b_syst_y_ll_MS_Down);
   fChain->SetBranchAddress("syst_y_ll_MSResbias_Up", &syst_y_ll_MSResbias_Up, &b_syst_y_ll_MSResbias_Up);
   fChain->SetBranchAddress("syst_y_ll_MSResbias_Down", &syst_y_ll_MSResbias_Down, &b_syst_y_ll_MSResbias_Down);
   fChain->SetBranchAddress("syst_y_ll_MSRho_Up", &syst_y_ll_MSRho_Up, &b_syst_y_ll_MSRho_Up);
   fChain->SetBranchAddress("syst_y_ll_MSRho_Down", &syst_y_ll_MSRho_Down, &b_syst_y_ll_MSRho_Down);
   fChain->SetBranchAddress("syst_y_ll_Scale_Up", &syst_y_ll_Scale_Up, &b_syst_y_ll_Scale_Up);
   fChain->SetBranchAddress("syst_y_ll_Scale_Down", &syst_y_ll_Scale_Down, &b_syst_y_ll_Scale_Down);
   fChain->SetBranchAddress("syst_TrackFilter_pT_trackj1", &syst_TrackFilter_pT_trackj1, &b_syst_TrackFilter_pT_trackj1);
   fChain->SetBranchAddress("syst_TrackFilter_y_trackj1", &syst_TrackFilter_y_trackj1, &b_syst_TrackFilter_y_trackj1);
   fChain->SetBranchAddress("syst_TrackFilter_phi_trackj1", &syst_TrackFilter_phi_trackj1, &b_syst_TrackFilter_phi_trackj1);
   fChain->SetBranchAddress("syst_TrackFilter_m_trackj1", &syst_TrackFilter_m_trackj1, &b_syst_TrackFilter_m_trackj1);
   fChain->SetBranchAddress("syst_TrackFilter_tau1_trackj1", &syst_TrackFilter_tau1_trackj1, &b_syst_TrackFilter_tau1_trackj1);
   fChain->SetBranchAddress("syst_TrackFilter_tau2_trackj1", &syst_TrackFilter_tau2_trackj1, &b_syst_TrackFilter_tau2_trackj1);
   fChain->SetBranchAddress("syst_TrackFilter_tau3_trackj1", &syst_TrackFilter_tau3_trackj1, &b_syst_TrackFilter_tau3_trackj1);
   fChain->SetBranchAddress("syst_TrackFilter_pT_trackj2", &syst_TrackFilter_pT_trackj2, &b_syst_TrackFilter_pT_trackj2);
   fChain->SetBranchAddress("syst_TrackFilter_y_trackj2", &syst_TrackFilter_y_trackj2, &b_syst_TrackFilter_y_trackj2);
   fChain->SetBranchAddress("syst_TrackFilter_phi_trackj2", &syst_TrackFilter_phi_trackj2, &b_syst_TrackFilter_phi_trackj2);
   fChain->SetBranchAddress("syst_TrackFilter_m_trackj2", &syst_TrackFilter_m_trackj2, &b_syst_TrackFilter_m_trackj2);
   fChain->SetBranchAddress("syst_TrackFilter_tau1_trackj2", &syst_TrackFilter_tau1_trackj2, &b_syst_TrackFilter_tau1_trackj2);
   fChain->SetBranchAddress("syst_TrackFilter_tau2_trackj2", &syst_TrackFilter_tau2_trackj2, &b_syst_TrackFilter_tau2_trackj2);
   fChain->SetBranchAddress("syst_TrackFilter_tau3_trackj2", &syst_TrackFilter_tau3_trackj2, &b_syst_TrackFilter_tau3_trackj2);
   fChain->SetBranchAddress("syst_JetTrackFilter_pT_trackj1", &syst_JetTrackFilter_pT_trackj1, &b_syst_JetTrackFilter_pT_trackj1);
   fChain->SetBranchAddress("syst_JetTrackFilter_y_trackj1", &syst_JetTrackFilter_y_trackj1, &b_syst_JetTrackFilter_y_trackj1);
   fChain->SetBranchAddress("syst_JetTrackFilter_phi_trackj1", &syst_JetTrackFilter_phi_trackj1, &b_syst_JetTrackFilter_phi_trackj1);
   fChain->SetBranchAddress("syst_JetTrackFilter_m_trackj1", &syst_JetTrackFilter_m_trackj1, &b_syst_JetTrackFilter_m_trackj1);
   fChain->SetBranchAddress("syst_JetTrackFilter_tau1_trackj1", &syst_JetTrackFilter_tau1_trackj1, &b_syst_JetTrackFilter_tau1_trackj1);
   fChain->SetBranchAddress("syst_JetTrackFilter_tau2_trackj1", &syst_JetTrackFilter_tau2_trackj1, &b_syst_JetTrackFilter_tau2_trackj1);
   fChain->SetBranchAddress("syst_JetTrackFilter_tau3_trackj1", &syst_JetTrackFilter_tau3_trackj1, &b_syst_JetTrackFilter_tau3_trackj1);
   fChain->SetBranchAddress("syst_JetTrackFilter_pT_trackj2", &syst_JetTrackFilter_pT_trackj2, &b_syst_JetTrackFilter_pT_trackj2);
   fChain->SetBranchAddress("syst_JetTrackFilter_y_trackj2", &syst_JetTrackFilter_y_trackj2, &b_syst_JetTrackFilter_y_trackj2);
   fChain->SetBranchAddress("syst_JetTrackFilter_phi_trackj2", &syst_JetTrackFilter_phi_trackj2, &b_syst_JetTrackFilter_phi_trackj2);
   fChain->SetBranchAddress("syst_JetTrackFilter_m_trackj2", &syst_JetTrackFilter_m_trackj2, &b_syst_JetTrackFilter_m_trackj2);
   fChain->SetBranchAddress("syst_JetTrackFilter_tau1_trackj2", &syst_JetTrackFilter_tau1_trackj2, &b_syst_JetTrackFilter_tau1_trackj2);
   fChain->SetBranchAddress("syst_JetTrackFilter_tau2_trackj2", &syst_JetTrackFilter_tau2_trackj2, &b_syst_JetTrackFilter_tau2_trackj2);
   fChain->SetBranchAddress("syst_JetTrackFilter_tau3_trackj2", &syst_JetTrackFilter_tau3_trackj2, &b_syst_JetTrackFilter_tau3_trackj2);
   fChain->SetBranchAddress("syst_Fake_pT_trackj1", &syst_Fake_pT_trackj1, &b_syst_Fake_pT_trackj1);
   fChain->SetBranchAddress("syst_Fake_y_trackj1", &syst_Fake_y_trackj1, &b_syst_Fake_y_trackj1);
   fChain->SetBranchAddress("syst_Fake_phi_trackj1", &syst_Fake_phi_trackj1, &b_syst_Fake_phi_trackj1);
   fChain->SetBranchAddress("syst_Fake_m_trackj1", &syst_Fake_m_trackj1, &b_syst_Fake_m_trackj1);
   fChain->SetBranchAddress("syst_Fake_tau1_trackj1", &syst_Fake_tau1_trackj1, &b_syst_Fake_tau1_trackj1);
   fChain->SetBranchAddress("syst_Fake_tau2_trackj1", &syst_Fake_tau2_trackj1, &b_syst_Fake_tau2_trackj1);
   fChain->SetBranchAddress("syst_Fake_tau3_trackj1", &syst_Fake_tau3_trackj1, &b_syst_Fake_tau3_trackj1);
   fChain->SetBranchAddress("syst_Fake_pT_trackj2", &syst_Fake_pT_trackj2, &b_syst_Fake_pT_trackj2);
   fChain->SetBranchAddress("syst_Fake_y_trackj2", &syst_Fake_y_trackj2, &b_syst_Fake_y_trackj2);
   fChain->SetBranchAddress("syst_Fake_phi_trackj2", &syst_Fake_phi_trackj2, &b_syst_Fake_phi_trackj2);
   fChain->SetBranchAddress("syst_Fake_m_trackj2", &syst_Fake_m_trackj2, &b_syst_Fake_m_trackj2);
   fChain->SetBranchAddress("syst_Fake_tau1_trackj2", &syst_Fake_tau1_trackj2, &b_syst_Fake_tau1_trackj2);
   fChain->SetBranchAddress("syst_Fake_tau2_trackj2", &syst_Fake_tau2_trackj2, &b_syst_Fake_tau2_trackj2);
   fChain->SetBranchAddress("syst_Fake_tau3_trackj2", &syst_Fake_tau3_trackj2, &b_syst_Fake_tau3_trackj2);
   fChain->SetBranchAddress("syst_pTScale_pT_trackj1", &syst_pTScale_pT_trackj1, &b_syst_pTScale_pT_trackj1);
   fChain->SetBranchAddress("syst_pTScale_y_trackj1", &syst_pTScale_y_trackj1, &b_syst_pTScale_y_trackj1);
   fChain->SetBranchAddress("syst_pTScale_phi_trackj1", &syst_pTScale_phi_trackj1, &b_syst_pTScale_phi_trackj1);
   fChain->SetBranchAddress("syst_pTScale_m_trackj1", &syst_pTScale_m_trackj1, &b_syst_pTScale_m_trackj1);
   fChain->SetBranchAddress("syst_pTScale_tau1_trackj1", &syst_pTScale_tau1_trackj1, &b_syst_pTScale_tau1_trackj1);
   fChain->SetBranchAddress("syst_pTScale_tau2_trackj1", &syst_pTScale_tau2_trackj1, &b_syst_pTScale_tau2_trackj1);
   fChain->SetBranchAddress("syst_pTScale_tau3_trackj1", &syst_pTScale_tau3_trackj1, &b_syst_pTScale_tau3_trackj1);
   fChain->SetBranchAddress("syst_pTScale_pT_trackj2", &syst_pTScale_pT_trackj2, &b_syst_pTScale_pT_trackj2);
   fChain->SetBranchAddress("syst_pTScale_y_trackj2", &syst_pTScale_y_trackj2, &b_syst_pTScale_y_trackj2);
   fChain->SetBranchAddress("syst_pTScale_phi_trackj2", &syst_pTScale_phi_trackj2, &b_syst_pTScale_phi_trackj2);
   fChain->SetBranchAddress("syst_pTScale_m_trackj2", &syst_pTScale_m_trackj2, &b_syst_pTScale_m_trackj2);
   fChain->SetBranchAddress("syst_pTScale_tau1_trackj2", &syst_pTScale_tau1_trackj2, &b_syst_pTScale_tau1_trackj2);
   fChain->SetBranchAddress("syst_pTScale_tau2_trackj2", &syst_pTScale_tau2_trackj2, &b_syst_pTScale_tau2_trackj2);
   fChain->SetBranchAddress("syst_pTScale_tau3_trackj2", &syst_pTScale_tau3_trackj2, &b_syst_pTScale_tau3_trackj2);
   fChain->SetBranchAddress("mcChannelNumber", &mcChannelNumber, &b_mcChannelNumber);
   fChain->SetBranchAddress("syst_TrackFilter_Ntracks_trackj1", &syst_TrackFilter_Ntracks_trackj1, &b_syst_TrackFilter_Ntracks_trackj1);
   fChain->SetBranchAddress("syst_TrackFilter_Ntracks_trackj2", &syst_TrackFilter_Ntracks_trackj2, &b_syst_TrackFilter_Ntracks_trackj2);
   fChain->SetBranchAddress("syst_JetTrackFilter_Ntracks_trackj1", &syst_JetTrackFilter_Ntracks_trackj1, &b_syst_JetTrackFilter_Ntracks_trackj1);
   fChain->SetBranchAddress("syst_JetTrackFilter_Ntracks_trackj2", &syst_JetTrackFilter_Ntracks_trackj2, &b_syst_JetTrackFilter_Ntracks_trackj2);
   fChain->SetBranchAddress("syst_Fake_Ntracks_trackj1", &syst_Fake_Ntracks_trackj1, &b_syst_Fake_Ntracks_trackj1);
   fChain->SetBranchAddress("syst_Fake_Ntracks_trackj2", &syst_Fake_Ntracks_trackj2, &b_syst_Fake_Ntracks_trackj2);
   fChain->SetBranchAddress("syst_pTScale_Ntracks_trackj1", &syst_pTScale_Ntracks_trackj1, &b_syst_pTScale_Ntracks_trackj1);
   fChain->SetBranchAddress("syst_pTScale_Ntracks_trackj2", &syst_pTScale_Ntracks_trackj2, &b_syst_pTScale_Ntracks_trackj2);
   fChain->SetBranchAddress("syst_TrackFilter_NtrackJets20", &syst_TrackFilter_NtrackJets20, &b_syst_TrackFilter_NtrackJets20);
   fChain->SetBranchAddress("syst_JetTrackFilter_NtrackJets20", &syst_JetTrackFilter_NtrackJets20, &b_syst_JetTrackFilter_NtrackJets20);
   fChain->SetBranchAddress("syst_Fake_NtrackJets20", &syst_Fake_NtrackJets20, &b_syst_Fake_NtrackJets20);
   fChain->SetBranchAddress("syst_pTScale_NtrackJets20", &syst_pTScale_NtrackJets20, &b_syst_pTScale_NtrackJets20);
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
   fChain->SetBranchAddress("nweight_bs", &nweight_bs, &b_nweight_bs);
   fChain->SetBranchAddress("weight_bs", weight_bs, &b_weight_bs);
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
   fChain->SetBranchAddress("omni_weight_test", &omni_weight_test, &b_omni_weight_test);
   Notify();
}

Bool_t MakeVars::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void MakeVars::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t MakeVars::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef MakeVars_cxx
