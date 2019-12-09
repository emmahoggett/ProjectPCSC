/*
 * Random_variable.h
 *
 *  Created on: Nov 25, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef RANDOM_VARIABLE_H_
#define RANDOM_VARIABLE_H_

#include <vector>
/**
 * \brief Abstract class that define a random variable.
 */
class Random_variable {
public:
    /**
     *  \brief Virtual method that return the sample of a probability distribution.
     */
    virtual std::vector<double> get_sample() const =0 ;
    /**
    *  \brief Virtual method that return the mean of a probability distribution.
     *  @return Mean of a probability distribution.
    */
    virtual double get_mean() const =0;

    /**
     * \brief Virtual method that return the variance of a probability distribution.
     * @return Variance of a probability distribution.
     */
    virtual double get_var() const =0;
    /**
     * \brief Virtual method that return the variance of a probability distribution.
     * @return Size of a sample from a probability distribution.
     */
    virtual int get_size() const =0 ;

    virtual Random_variable* sub_sample( const int N ) = 0;



};
#endif /*RANDOM_VARIABLE_H_*/
