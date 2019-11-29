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
#include "Normal.h"
#include "Uniform.h"

class StandardCentralLimitThm: public AbstCentralLimitThm{
public:
    /**
     * Constructor
     */
    StandardCentralLimitThm();
    /**
     * Destructor
     */
    virtual ~StandardCentralLimitThm();

    /**
     * Check if the central limit theorem is completed
     * @param sample : Random_variable pointer
     * @param expectation_sample : Expectation given by the expectation methods
     * @param alpha : variable given by the user between ]0,1[
     */
    virtual void getCentralLimitThm(Random_variable* sample, double expectation_sample, double alpha) override ;
private:
    double* p_interval;

};
#endif /*STANDARDCENTRALLIMITTHM_HPP_*/
