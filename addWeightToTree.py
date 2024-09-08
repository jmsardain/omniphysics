import uproot
import numpy as np 


def main():
    fileMC = uproot.open('/data/jmsardain/Zjets/data/WithTracks_ZjetOmnifold_May19_MGPy8FxFxRew_syst_test_Mar0723.root')
    treeMC = fileMC['OmniTree']

        
    branches_mc = {name: treeMC[name].array() for name in treeMC.keys()}
    test_weights = np.load('/data/jmsardain/Zjets/data/iteration_2_step_2.npz')['test']
    branches_mc["omni_weight_test"]  = test_weights


    with uproot.recreate('/data/jmsardain/Zjets/data/tmp_mc.root') as new_file:
        new_file["OmniTree"] = branches_mc


    return


if __name__ == "__main__":
    main()
    pass 

