/*
 * Expectation.cpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */


#include "Expectation.hpp"

Expectation::Expectation(): pvec_U() {}
Expectation::~Expectation() {}


void Expectation::SetVector(vector<double> vec_U) {
    pvec_U.clear();
    pvec_U.reserve(vec_U.size());
    for (int i = 0; i < vec_U.size(); ++i) {
        pvec_U.push_back(vec_U[i]);
    }

}
