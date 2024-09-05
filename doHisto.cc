#include <iostream>
#include "TString.h"
#include "Closure.h"
#include "MakeVars.h"
#include "DoPlots.h"
#include "TChain.h"
#include "TFile.h"
#include "TTree.h"
#include "TROOT.h"
#include <string>
#include <vector>
#include <TLorentzVector.h>
#include "AtlasStyle.h"
#include "AtlasLabels.h"
#include "AtlasUtils.h"

using namespace std ;

int main(int argc, char* argv[]){
// int main(){
	std::string step(argv[1]);
	TString Step = TString(step.c_str());
	TString theLink;
	TChain * myChain;

	if (Step=="reco"){
		std::cout << " do plots from mc (reco and omni) ... " << std::endl;
		theLink = "data/tmp_mc.root";

		myChain = new TChain( "OmniTree" ) ;
		cout << theLink << endl ;
		myChain->Add( theLink );
		cout << "my chain = " << myChain->GetEntries() << endl ;
	}

	if (Step=="reco"){
		std::cout << " do plots from mc (reco and omni) ... " << std::endl;
		MakeVars * myAnalysis ;
		myAnalysis =  new MakeVars( myChain ) ;
		myAnalysis->Loop();
	}

	if (Step=="plots"){
		SetAtlasStyle();
		TFile* outputFile  = TFile::Open("out/output.root");
	

		FinalPlots(outputFile, "hpT_R04");
		FinalPlots(outputFile, "hpT_R06");
		FinalPlots(outputFile, "hpT_R10");
		FinalPlots(outputFile, "hLund_z_R04");
		FinalPlots(outputFile, "hLund_z_R06");
		FinalPlots(outputFile, "hLund_z_R10");
		FinalPlots(outputFile, "hLund_dR_R04");
		FinalPlots(outputFile, "hLund_dR_R06");
		FinalPlots(outputFile, "hLund_dR_R10");
		FinalPlots(outputFile, "hEEC_R04");
		FinalPlots(outputFile, "hEEC_R06");
		FinalPlots(outputFile, "hEEC_R10");
		FinalPlots(outputFile, "h_fracpT_ring");
	}
	return 0;

}
