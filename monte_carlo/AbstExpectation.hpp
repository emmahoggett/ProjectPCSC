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
     * @param rvs : Pointer of Random variable, which contains a sample and parameters of a distribution.
     * @return expectation : float that correspond to the mean of values in the vector given by Random_variable.
     */
    virtual double getExpectation() const = 0;
    /**
     * \brief Virtual method that compute expectation.
     * Compute the expectation of a given sample distribution .
     * @param rvs : Pointer of Random variable, which contains a sample and parameters of a distribution.
     * @return  expectation : float that correspond to the mean of values in the vector given by Random_variable.
     */
    virtual double calculate_expectation(const Random_variable* rvs) =0;
    /**
     * \brief Virtual method that set the expectation.
     * @param rvs : Pointer of Random variable, which contains a sample and parameters of a distribution.
     */
    virtual void setExpectation(const Random_variable* rvs) = 0 ;
    /**
     * \brief Set the function that will be used to compute the expectation.
     *
     *
     * The function is defined by the user at the beginning of the main.
     * This way the expectation will be equal to E[f(x)].
     *
     * @param f : Pointer to a function defined by the user.
     */
    void setOperator(double (*f)(double y));
    /**
     * \brief Return the value of f(x) at x.
     *
     * The function f should be set by the user.
     * @param y : Double value defined in the set of f.
     * @return A double that is equal to f(y).
     */
    double computeOperator(double y) const;
    /**
     * \brief Check if the function is linear.
     *
     * This function is needed in Convergence. Indeed in the convergence file, the true mean of the
     * vector can be returned which correspond to E[x], which means that f(x) = x.
     * @return A boolean that confirm if the function is linear.
     */
    virtual bool isFunctionLin() =0;


private:
    double (*function)(double y);
};

#endif /*ABSTEXPECTATION_HPP_*/
