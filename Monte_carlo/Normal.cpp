//
// Created by pierr on 25/11/2019.
//
#include "Normal.h
#include <iostream>
#include <boost/math/special_functions/erf.hpp>
Normal :: Normal(const unsigned int N ) :
Uniform(N) ,mean_normal(0.0) , var_normal(1.0)
{
    for (int i = 0; i < N; ++i) {
        N_m.push_back( sqrt(2)*erfc_inv(2*U_m[i]) );
    }
}


Normal :: Normal(const unsigned int N , const double mu , const double var)
Uniform(N) ,mean_normal(mu) , var_normal(var)
{
    for (int i = 0; i < N; ++i) {
        N_m.push_back( mu + sqrt(var)*sqrt(2)*erfc_inv(2*U_m[i]) );
    }
}

// Get function
Normal :: std::vector<double> get_sample() const
{
    return N_m ;
}
Normal :: virtual double get_mean() const
{
    return mean_normal;
}
Normal :: virtual double get_var() const
{
    return var_normal ;
}