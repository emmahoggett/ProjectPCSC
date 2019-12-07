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
/** \brief
 *
 */
class Random_variable {
    /**
     * Abstract class that call Uniform
     *
     */
public:
    // Public virtual method that return the vector obtained with the mean, variance and the size given by the user
    virtual std::vector<double> get_sample() const =0 ;

    // Public virtual method that return the mean given by the user
    virtual double get_mean() const =0;

    // Public virtual method that return the mean given by the user
    virtual double get_var() const =0;
    virtual int get_size() const =0 ;

};
#endif /*RANDOM_VARIABLE_H_*/
