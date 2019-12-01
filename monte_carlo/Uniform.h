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
#include "Exception.hpp"
#include <iostream>

class Uniform : public Random_variable {

public:
    // Constructor definition
    Uniform(double N) ;
    Uniform(double N, double a , double b );

    // Get function
    virtual std::vector<double> get_sample() { return U_m;}
    virtual double get_mean() { return mean_uniform;}
    virtual double get_var() { return var_uniform;}

private:
    double mean_uniform ;
    double var_uniform ;
    int m_size ;
    double m_a;
    double m_b;

    void set_interval(const double a, const double b) ;
    void set_size(const int N);

protected:
    std::vector<double> U_m ;
};
#endif //MONTE_CARLO_UNIFORM_GENERATOR_H
