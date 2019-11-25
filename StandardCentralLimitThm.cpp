/*
 * StandardCentralLimitThm.cpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "StandardCentralLimitThm.hpp"

StandardCentralLimitThm::StandardCentralLimitThm() {
    p_mu = getMean();
    p_sigma = getVariance();
}

double StandardCentralLimitThm::getCentralLimitThm() const {
    vector <double> vec_U = getVector();
    double size_N = vec_U.size();
    double mean_samples = 0;
    double variance_sample = 0;

    for (int i = 0; i < size_N; ++i) {
        mean_samples+= vec_U[i]/(i+1);
    }

    for (int j = 0; j < size_N; ++j) {
        variance_sample+= pow(vec_U[j]-mean_samples, 2);
    }
    variance_sample = pow(variance_sample/(size_N-1),1/2);


}

