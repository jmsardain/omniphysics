#include "TH1.h"
#include "fastjet/ClusterSequence.hh"

using namespace std;

#ifndef jetHelpers_h
#define jetHelpers_h

vector<fastjet::PseudoJet> GetJet(vector<fastjet::PseudoJet> particles, float radius);
double GetFrag_zT( vector<fastjet::PseudoJet> jet_constit, fastjet::PseudoJet jet );
double GetEEC( vector<fastjet::PseudoJet> jet_constit );
void processJets(fastjet::PseudoJet& jet, double radius,  std::vector<double>& lundz,  std::vector<double>& lundkt,  std::vector<double>& lundDr);
double GetRing(fastjet::PseudoJet jet);

#endif
