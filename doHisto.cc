#include <iostream>
#include "TString.h"
#include "MakeOmni.h"
#include "MakeTruth.h"
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
	std::string omniOrtrue(argv[1]);
	TString OmniOrTruth = TString(omniOrtrue.c_str());
	TString theLink;
	TChain * myChain;
	// file for omni : /global/cfs/cdirs/m3246/ZjetOmnifold/data/slimmed_files/WithTracks_ZjetOmnifold_May19_MGPy8FxFxRew_syst_test_Mar0723.root
	// but for omni take tmp_mc.root since omni_test_weights are added as a branch 
	// file for truth : /global/cfs/cdirs/m3246/ZjetOmnifold/data/slimmed_files/WithTracks_TruthPseudodata_Mar12_Combined_1_40_shuffled.root
	
	if (OmniOrTruth=="reco"){ 
		std::cout << " do plots for omni ... " << std::endl;
		theLink = "/data/jmsardain/Zjets/data/tmp_mc.root";
	}

	if (OmniOrTruth=="truth"){ 
		std::cout << " do plots for truth ... " << std::endl;
		theLink = "/data/jmsardain/Zjets/data/WithTracks_TruthPseudodata_Mar12_Combined_1_40_shuffled.root";
	}

	if (OmniOrTruth=="reco" || OmniOrTruth=="truth"){
		
		myChain = new TChain( "OmniTree" ) ;
		cout << theLink << endl ;
		myChain->Add( theLink );
		cout << "my chain = " << myChain->GetEntries() << endl ;
	}

	if (OmniOrTruth=="reco"){
		MakeOmni * myAnalysis ;
		myAnalysis =  new MakeOmni( myChain ) ;
		myAnalysis->Loop();
	}

	if (OmniOrTruth=="truth"){
		MakeTruth * myAnalysis ;
		myAnalysis =  new MakeTruth( myChain ) ;
		myAnalysis->Loop();
	}

	if (OmniOrTruth=="plots"){
		SetAtlasStyle();
		TFile* outputFileOmni  = TFile::Open("out/output_omni.root");
		TFile* outputFileTruth  = TFile::Open("out/output_truth.root");
	

		FinalPlots(outputFileOmni, outputFileTruth, "hpT_R04");
		FinalPlots(outputFileOmni, outputFileTruth, "hpT_R06");
		FinalPlots(outputFileOmni, outputFileTruth, "hpT_R10");
		FinalPlots(outputFileOmni, outputFileTruth, "hLund_z_R04");
		FinalPlots(outputFileOmni, outputFileTruth, "hLund_z_R06");
		FinalPlots(outputFileOmni, outputFileTruth, "hLund_z_R10");
		FinalPlots(outputFileOmni, outputFileTruth, "hLund_dR_R04");
		FinalPlots(outputFileOmni, outputFileTruth, "hLund_dR_R06");
		FinalPlots(outputFileOmni, outputFileTruth, "hLund_dR_R10");
		FinalPlots(outputFileOmni, outputFileTruth, "hEEC_R04");
		FinalPlots(outputFileOmni, outputFileTruth, "hEEC_R06");
		FinalPlots(outputFileOmni, outputFileTruth, "hEEC_R10");
		FinalPlots(outputFileOmni, outputFileTruth, "h_fracpT_ring");
	}
	return 0;

}
