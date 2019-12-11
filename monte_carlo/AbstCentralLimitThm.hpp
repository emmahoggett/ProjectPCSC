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
#include "AbstExpectation.hpp"
#include "Normal.h"
#include "Uniform.h"

using namespace std;
/** \brief Abstract central limit theorem class.
 *
 * Contains abstract methods to compute and check if the the central limit
 * theorem is respected. Parent class of StandardCentralLimitThm.
 */

class AbstCentralLimitThm{

public:
    /**
     * \brief Default Constructor.
     */
    AbstCentralLimitThm();
    /**
     * \brief Default Destructor.
     */
    virtual ~AbstCentralLimitThm();

    /**
     * \brief Virtual Central Limit Theorem method.
     * @param sample :  Pointer of Random variable, which contains a vector and the parameter of the vectors
     * distribution.
     * @param expectation_sample : Expectation of the vector that was computed with the vector.
     * @param alpha : Float number that is defined between ]0,1[ and is the confidence interval.
     */
    virtual void calculate_CentralLimitThm(const Random_variable* sample, AbstExpectation* expectation, const double alpha) =0;
    /**
     * \brief Virtual method to verify central limit theorem.
     *
     * Check if the expectation of the vector respect central limit theorem.
     * @return A boolean, which indicates if the Central Limit Theorem is verified.
     */
    virtual bool is_verified() const =0;

    /**
     * \brief Virtual method that return the interval of the central limit theorem.
     * @return The interval of the central limit theorem which is a vector of size two.
     */
    virtual vector<double> get_interval() const =0 ;

    /**
     * \brief Abstract method that return information about the CLT.
     *
     * These informations are for example the interval of the CLT or if the CLT is respected.
     * @param flux : Desired output stream, where the information will be specified.
     */

    virtual void visualization(ostream &flux) const  =0 ;


    
};

#endif /*CENTRALLIMITTHM_HPP_*/
