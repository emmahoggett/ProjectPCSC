/*
 * CentralLimitThm.cpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "CentralLimitThm.hpp"

CentralLimitThm::CentralLimitThm(){
    Random_variable* pRandVar;
    pRandVar =;

}
CentralLimitThm::~CentralLimitThm() {}

void CentralLimitThm::setVector(vector<double> vec_U) {
    pvec_U.clear();
    pvec_U.reserve(vec_U.size());
    for (int i = 0; i < vec_U.size(); ++i) {
        pvec_U.push_back(vec_U[i]);
    }
}


void CentralLimitThm::setMean(double mu) {
    p_mu = mu;
}
void CentralLimitThm::setVariance(double sigma) {
    p_sigma = sigma;
}
