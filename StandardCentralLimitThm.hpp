/*
 * StandardCentralLimitThm.hpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */


#ifndef STANDARDCENTRALLIMITTHM_HPP_
#define STANDARDCENTRALLIMITTHM_HPP_

#include "CentralLimitThm.hpp"

class StandardCentralLimitThm: public CentralLimitThm{
public:
    // Constructor and destructor
    StandardCentralLimitThm();
    virtual ~StandardCentralLimitThm();

    // Other public methods
    virtual void getCentralLimitThm(const Random_variable* sample, double expectation_sample, double alpha)const override ;
private:
    double* p_interval;

};
#endif /*STANDARDCENTRALLIMITTHM_HPP_*/
