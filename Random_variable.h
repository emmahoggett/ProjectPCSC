/*
 * Moment.cpp
 *
 *  Created on: Nov 25, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef MONTE_CARLO_RANDOM_VARIABLE_H
#define MONTE_CARLO_RANDOM_VARIABLE_H

#include <vector>
class Random_variable {

public:
    virtual std::vector<double> get_sample() const =0 ;
    virtual double get_mean() const =0;
    virtual double get_var() const =0;

};
#endif //MONTE_CARLO_RANDOM_VARIABLE_H
