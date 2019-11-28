/*
 * StandardCentralLimitThm.hpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */


#ifndef STANDARDCENTRALLIMITTHM_HPP_
#define STANDARDCENTRALLIMITTHM_HPP_

#include "AbstCentralLimitThm.hpp"
#include "Random_variable.h"

class StandardCentralLimitThm: public AbstCentralLimitThm{
public:
    // Constructor and destructor
    StandardCentralLimitThm();
    virtual ~StandardCentralLimitThm();

    // Other public methods
    virtual void getCentralLimitThm(Random_variable* sample, double expectation_sample, double alpha) override ;
private:
    double* p_interval;

};
#endif /*STANDARDCENTRALLIMITTHM_HPP_*/
