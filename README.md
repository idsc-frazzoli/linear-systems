# linear-systems
Simple class for strictly proper SISO linear systems


## Functionality
-Intended for non-uniform time steps
-LTI::SisoSystem objects can be multiplied and divided in the usual way
-Simulates the system between time steps using a sparse matrix multiplication on a state space realization
-Assumes first order hold between input updates 

Updates state with time-input pairs (t_i,u_i)
Output can be requested at any time (t_j,y_j)
