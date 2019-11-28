//
// Created by pierr on 22/11/2019.
//

#ifndef MONTE_CARLO_UNIFORM_GENERATOR_H
#define MONTE_CARLO_UNIFORM_GENERATOR_H

#include "Random_variable.h"

class Uniform : public Random_variable {

public:
    // Constructor definition
    Uniform( const unsigned int N ) ;
    Uniform( const unsigned int N , const double a , const double b );

    // Get function
    std::vector<double> get_sample() const ;
    virtual double get_mean() const ;
    virtual double get_var() const ;

protected:
    std::vector<double> U_m ;

private:
    double mean_uniform ;
    double var_uniform ;
};
#endif //MONTE_CARLO_UNIFORM_GENERATOR_H
