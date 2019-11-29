/*
 * Uniform.h
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */
#ifndef MONTE_CARLO_UNIFORM_GENERATOR_H
#define MONTE_CARLO_UNIFORM_GENERATOR_H

#include "Random_variable.h"

class Uniform : public Random_variable {

public:
    // Constructor definition
    Uniform( const unsigned int N ) ;
    Uniform( const unsigned int N , const double a , const double b );

    // Get function
    virtual std::vector<double> get_sample() { return U_m;}
    virtual double get_mean() { return mean_uniform;}
    virtual double get_var() { return var_uniform;}

protected:
    std::vector<double> U_m ;

private:
    double mean_uniform ;
    double var_uniform ;
};
#endif //MONTE_CARLO_UNIFORM_GENERATOR_H
