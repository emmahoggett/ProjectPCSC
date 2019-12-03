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
#include <vector>

class StandardCentralLimitThm: public AbstCentralLimitThm{
public:
    /**
     * Constructor
     */
    StandardCentralLimitThm();
    /**
     * Destructor
     */
    StandardCentralLimitThm(const Random_variable* sample,const double expectation_sample);

    StandardCentralLimitThm(const Random_variable* sample,const double expectation_sample, const double alpha);

    virtual ~StandardCentralLimitThm();

    /**
     * Check if the central limit theorem is completed
     * @param sample : Random_variable pointer
     * @param expectation_sample : Expectation given by the expectation methods
     * @param alpha : variable given by the user between ]0,1[
     */

    virtual bool is_verified() const ;
    virtual vector<double> get_interval() const ;
    virtual void calculate_CentralLimitThm(const Random_variable* sample,const double expectation_sample, const double alpha);

private:

    
    bool verification ;
    vector<double> interval;
    double m_alpha;

};
#endif /*STANDARDCENTRALLIMITTHM_HPP_*/
