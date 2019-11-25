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
    virtual double getCentralLimitThm(double Threshold = 1e-4)const override ;
private:
    double p_mu;
    double p_sigma;

};
#endif /*STANDARDCENTRALLIMITTHM_HPP_*/
