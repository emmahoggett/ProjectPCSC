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
#include "Random_variable.h"
#include "Normal.h"
#include "Uniform.h"

using namespace std;
/**
 * Abstract central limit theorem class: Mother of the Standard Central Limit Theorem
 */
class AbstCentralLimitThm{

public:
    /**
     * Abstract Constructor : has a default setup
     */
    AbstCentralLimitThm();
    /**
     * Abstract Destructor
     */
    virtual ~AbstCentralLimitThm();

    /**
     * Abstract Central Limit Theorem function
     * @param sample : Random_variable which contains a vector, the mean and the variance that was used to determine
     * the vector
     * @param expectation_sample : Actual mean of the vector that was computed with the vector
     * @param alpha : float number that is defined between ]0,1[ and is the confidence interval
     */
    virtual void calculate_CentralLimitThm(const Random_variable* sample,const double expectation_sample, const double alpha) =0;
    virtual bool is_verified() const =0;
    virtual vector<double> get_interval() const =0;
    
};

#endif /*CENTRALLIMITTHM_HPP_*/
