/*
 * MonteCarloExpectation.cpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "MonteCarloExpectation.hpp"

MonteCarloExpectation::MonteCarloExpectation() {}

MonteCarloExpectation::~MonteCarloExpectation() {}

double MonteCarloExpectation::getExpectation() {
    vector<double> vec_U = getVector();
    double mean = 0;
    for (int i = 0; i < vec_U.size(); ++i) {
        mean += vec_U[i];
    }
    mean = mean/(vec_U.size());
    return mean;
}
