#!/bin/bash

setupATLAS 
lsetup "root 6.30.02-x86_64-el9-gcc13-opt" 

COMPILER=$(root-config --cxx)
FLAGS=$(root-config --cflags --libs)
echo $COMPILER $FLAGS

# $COMPILER $FLAGS -g -O3 -Wall -Wextra -Wpedantic -fopenmp ./doHisto.cc ./PostPro.C ./analysisHelpers.cxx  `fastjet-install/bin/fastjet-config --cxxflags --libs --plugins` -I. -o doHisto
# $COMPILER $FLAGS -g -O3 -Wall -Wextra -Wpedantic -fopenmp ./doHisto.cc ./Closure.C  ./DoReco.C  ./DoTruth.C ./analysisHelpers.cxx ./jetHelpers.cxx `fastjet-install/bin/fastjet-config --cxxflags --libs --plugins` -I. -o doHisto
# $COMPILER $FLAGS -g -O3 -Wall -Wextra -Wpedantic -fopenmp ./doHisto.cc ./Closure.C  ./DoReco.C  ./DoTruth.C ./DoPlots.cxx ./analysisHelpers.cxx ./jetHelpers.cxx ./AtlasLabels.C ./AtlasStyle.C ./AtlasUtils.C `fastjet-install/bin/fastjet-config --cxxflags --libs --plugins` -I. -o doHisto
$COMPILER $FLAGS -g -O3 -Wall -Wextra -Wpedantic -fopenmp ./doHisto.cc ./MakeOmni.C ./MakeTruth.C  ./DoPlots.cxx ./analysisHelpers.cxx ./jetHelpers.cxx ./AtlasLabels.C ./AtlasStyle.C ./AtlasUtils.C `fastjet-install/bin/fastjet-config --cxxflags --libs --plugins` -I. -o doHisto
