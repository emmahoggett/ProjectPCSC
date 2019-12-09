/*
 * Expectation.hpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef ABSTEXPECTATION_HPP_
#define ABSTEXPECTATION_HPP_

#include <iostream>
#include <vector>
#include "Random_variable.h"
#include "Normal.h"
#include "Uniform.h"

using namespace std;

/**
 * Parent class of MonteCarloExpectation.
 *
* \brief Abstract expectation class.
*/
class AbstExpectation{
public:

    /**
     * \brief Default constructor.
     */
    AbstExpectation();
    /**
     * \brief Default destructor.
     */
    virtual ~AbstExpectation();


    /**
     * \brief Virtual method that return the computed expectation.
     *
     * @param rvs : Pointer of Random variable, which gives a vector and the parameter of the vectors
     * distribution.
     * @return expectation : float that correspond to the mean of values in the vector given by Random_variable.
     */
    virtual double getExpectation() const = 0;
    /**
     * \brief Virtual method that compute expectation.
     * Compute the expectation with variables contained into the vector.
     * @param rvs : Pointer of Random variable, which gives a vector and the parameter of the vectors
     * distribution.
     * @return  expectation : float that correspond to the mean of values in the vector given by Random_variable.
     */
    virtual double calculate_expectation(const Random_variable* rvs) const =0;
    /**
     * \brief Virtual method that set the expectation.
     * @param rvs : Pointer of Random variable, which gives a vector and the parameter of the vectors
     * distribution.
     */
    virtual void setExpectation(const Random_variable* rvs) = 0 ;

    void setOperator(double (*f)(double y));
    double computeOperator(double y) const;

    bool isFunctionSet() const ;

private:
    double (*function)(double y);
    bool is_set ;
};

#endif /*ABSTEXPECTATION_HPP_*/
