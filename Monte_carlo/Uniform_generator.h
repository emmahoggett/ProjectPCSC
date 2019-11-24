//
// Created by pierr on 22/11/2019.
//

#ifndef MONTE_CARLO_UNIFORM_GENERATOR_H
#define MONTE_CARLO_UNIFORM_GENERATOR_H

#include <vector>

class Uniform_generator{

public:
    // Constructor definition
    Uniform_generator( const unsigned int N ) ;
    Uniform_generator( const unsigned int N , const double a , const double b )

    // Get function
    vector<double> Get_sample() const ;
    virtual double Get_mean() const ;
    virtual double Get_var() const ;

protected:
    vector<double> U_m ;

private:
    double mean_uniform ;
    double sigma_uniform ;
};
#endif //MONTE_CARLO_UNIFORM_GENERATOR_H
