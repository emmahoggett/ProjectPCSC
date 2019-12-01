/*
 * StandardCentralLimitThm.cpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "StandardCentralLimitThm.hpp"

StandardCentralLimitThm::StandardCentralLimitThm() {
    p_interval = new double [2];
}

StandardCentralLimitThm::~StandardCentralLimitThm() {}

void StandardCentralLimitThm::getCentralLimitThm(Random_variable* sample, double expectation_sample, double alpha) {
    vector<double> vec_U = sample-> get_sample();
    int size_N = vec_U.size();
    double mu = sample -> get_mean();
    double variance = sample -> get_var();
    double sigma;
    sigma = pow(variance, 1/2);
    double quantile;
    quantile = 1- alpha/2;

    p_interval[0] = expectation_sample-quantile*sigma/pow(size_N,1/2);
    p_interval[1] = expectation_sample+quantile*sigma/pow(size_N,1/2);

    if ((mu >= p_interval[0]) && (mu <= p_interval[1])){
        std::cout << "The central limit theorem is respected.\n"
                     "Central limit theorem finished successfully.\n"<< std::endl ;
    }
    else {
        std::cout << "The central limit theorem isn't respected.\n"
                     "Central limit theorem finished successfully.\n"<< std::endl ;
    }


}

