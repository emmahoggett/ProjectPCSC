/*
 * CentralLimitThm.hpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef CENTRALLIMITTHM_HPP_
#define CENTRALLIMITTHM_HPP_

#include <iostream>
#include <vector>
#include <cmath>
#include "MonteCarloExpectation.hpp"

using namespace std;

class CentralLimitThm{
public:
    // Constructor and destructor
    CentralLimitThm();
    virtual ~CentralLimitThm();

    // Other public methods
    void setVector(vector<double> vec_U);
    void setMean(double mu);
    void setVariance(double sigma);

    virtual double getCentralLimitThm() = 0;

    // Get methods
    vector<double> getVector() const { return pvec_U; }
    double getMean()const{return p_mu;}
    double getVariance()const{return p_sigma;}


private:
    vector<double> pvec_U;
    double p_mu;
    double p_sigma;

};

#endif /*CENTRALLIMITTHM_HPP_*/
