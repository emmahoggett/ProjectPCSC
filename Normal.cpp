//
// Created by pierr on 25/11/2019.
//
#include "Normal.h"
#include <iostream>
#include <cmath>
#include "boost/math/distributions/normal.hpp"
Normal :: Normal(const unsigned int N ) :
Uniform(N) ,mean_normal(0.0) , var_normal(1.0)
{
    boost::math::normal dist(0.0,1.0) ;
    quantile(dist , 0.7);
    for (int i = 0; i < N; ++i) {
        N_m.push_back( quantile(dist,U_m[i]) );
    }
}


Normal :: Normal(const unsigned int N , const double mu , const double var) :
Uniform(N) ,mean_normal(mu) , var_normal(var)
{
    for (int i = 0; i < N; ++i) {
        N_m.push_back( mu + sqrt(var)*sqrt(2)*erf(2*U_m[i]) );
    }
}

// Get function
std::vector<double> Normal :: get_sample() const
{
    return N_m ;
}
 double Normal :: get_mean() const
{
    return mean_normal;
}
double Normal ::get_var() const
{
    return var_normal ;
}