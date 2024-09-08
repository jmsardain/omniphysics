#!/bin/bash
cd /home/jmsardain/omniphysics/

export ATLAS_LOCAL_ROOT_BASE=/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase
export ALRB_localConfigDir=$HOME/localConfig
source ${ATLAS_LOCAL_ROOT_BASE}/user/atlasLocalSetup.sh

lsetup "root 6.30.02-x86_64-el9-gcc13-opt" 

OmniOrTruth=$1
./doHisto ${OmniOrTruth}
