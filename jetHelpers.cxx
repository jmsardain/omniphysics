#include "jetHelpers.h"
#include "TH2.h"
#include <tuple>


#include "fastjet/tools/Recluster.hh" 
using namespace std;
using namespace fastjet;
#ifndef jetHelpers_cxx
#define jetHelpers_cxx

vector<PseudoJet> GetJet(vector<PseudoJet> particles, float radius){
  JetDefinition jetdef(antikt_algorithm, radius);
  ClusterSequence cs_seq(particles, jetdef);
  vector<PseudoJet> jets = sorted_by_pt(cs_seq.inclusive_jets());
  return jets;
}

// add fragmentation
double GetFrag_zT( vector<PseudoJet> jet_constit, PseudoJet jet ){
  double sum_trk_pt = 0;
  double zT = -999;
  for (int iconstit = 0; iconstit < jet_constit.size(); ++iconstit) {
    sum_trk_pt += pow(jet_constit[iconstit].pt(), 0.5);
  }
  zT = sum_trk_pt / jet.pt();
  return zT;
}

// add EEC
double GetEEC( vector<PseudoJet> jet_constit ){
  double esum = 0;
  for (int iconstit = 0; iconstit < jet_constit.size(); ++iconstit) {
    for (int jconstit = iconstit + 1; jconstit < jet_constit.size(); ++jconstit) {
      esum += jet_constit[iconstit].e() * jet_constit[jconstit].e();
    }
  }
  return esum;
}

void processJets(PseudoJet& jet, double radius,  std::vector<double>& lundz,  std::vector<double>& lundkt,  std::vector<double>& lundDr) {
  
  fastjet::JetDefinition jd(fastjet::cambridge_algorithm, radius);
  fastjet::Recluster rc(jd);
  fastjet::PseudoJet j = rc.result(jet);
  fastjet::PseudoJet jj, j1, j2;
  jj = j;
  while (jj.has_parents(j1,j2)) {
    // Make sure to follow the harder branch
    if (j1.pt2() < j2.pt2()) 	{
      std::swap(j1, j2);
    }
    lundz.push_back(std::log( 1 / (j2.pt() / (j1.pt() + j2.pt()))));
    lundkt.push_back(std::log( j2.pt() * j1.delta_R(j2)));
    lundDr.push_back(std::log( radius / j1.delta_R(j2)));
    
    jj = j1;
  }
}

double GetRing(PseudoJet jet){

  JetDefinition jetdef_forRing(antikt_algorithm, 0.4);
  ClusterSequence cs_seq_forRing(jet.constituents(), jetdef_forRing);
  vector<PseudoJet> R04_forRing = sorted_by_pt(cs_seq_forRing.inclusive_jets());

  // get leading r=0.4 jet inside r=0.6 jet

  double frac = R04_forRing[0].pt() / jet.pt();

  return 1 - frac ;
}


#endif
