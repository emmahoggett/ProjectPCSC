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

using namespace std;

class AbstCentralLimitThm{
public:
    // Constructor and destructor
    AbstCentralLimitThm();
    virtual ~AbstCentralLimitThm();

    // Other public methods
    virtual void getCentralLimitThm(Random_variable* sample, double expectation_sample, double alpha) = 0;

};

#endif /*CENTRALLIMITTHM_HPP_*/
