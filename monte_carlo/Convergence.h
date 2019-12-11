/*
 * Convergence.h
 *
 *  Created on: Dec 06, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */


#ifndef CONVERGENCE_H_
#define CONVERGENCE_H_

#include "AbstOutput.h"
#include "AbstCentralLimitThm.hpp"
#include "AbstExpectation.hpp"
/**
 * \brief Compute the data to plot the convergence of the CLT
 *
 * Compute and create a `.csv` file that confirm the convergence of the Central Limit Theorem (CLT).
 * Child of AbstOutput.
 */
class Convergence :  public AbstOutput {
public:
    /**
     * \brief Constructor.
     * Set the following variables.
     * @param centralLimit_ : Pointer of AbstCentralLimitThm, which gives the interval of the central
     * limit theorem and a boolean that confirm if the CTL is completed.
     * @param expectation_ : Pointer of AbstExpectation, which gives the expectation computed and a boolean
     * that confirm if the probability density function is linear.
     * @param sample_ : Pointer of Random_variable, which gives a vector and the parameter of the vectors
     * distribution. It should work for all child of Random_variable.
     * @param alpha_ : The confidence interval, which is float number between ]0,1[.
     */
    Convergence(AbstCentralLimitThm* centralLimit_ , AbstExpectation* expectation_,Random_variable* sample_, const double alpha_);
/**
 * \brief Default destructor.
 */
    ~Convergence() ;
/**
 * \brief Write `.csv` file on the convergence of the CTL.
 *
 * In this method, the lower bound, the upper bound and the expectation is computed, from one to the vector
 * size given by the user. The result is then return into a csv file.
 *
 * If the probability density function is equal to x, the mean of the vector is returned.
 * @param file_name : Name of the file that is returned.
 */
    virtual void writefile(const char *file_name ) const override ;

private:
    AbstCentralLimitThm* centralLimit ;
    AbstExpectation* expectation;
    Random_variable* sample ;
    double alpha ;

};
#endif /*CONVERGENCE_H_*/
