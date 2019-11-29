//
// Created by pierr on 25/11/2019.
//

#include "Uniform.h"
#include <random>
#include <iostream>
#include <cmath>

// Constructor
Uniform :: Uniform( const unsigned int N ) :
mean_uniform(0.5) , var_uniform(1.0/12.0)
{
        std::random_device rd;  //Will be used to obtain a seed for the random number engine
        std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
        std::uniform_real_distribution<> dis(0.0, 1.0);
        for (int n = 0; n < N; ++n) {
            // Use dis to transform the random unsigned int generated by gen into a
            // double in [0, 1). Each call to dis(gen) generates a new random double
            U_m.push_back(dis(gen));
        }
}
Uniform :: Uniform( const unsigned int N , const double a , const double b ) :
mean_uniform((a+b)/2.0) , var_uniform(pow(a+b,2)/12.0)
{
    // here a < b make an error that manage this

    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_real_distribution<> dis(a, b);
    for (int n = 0; n < N; ++n) {
        // Use dis to transform the random unsigned int generated by gen into a
        // double in [0, 1). Each call to dis(gen) generates a new random double
        U_m.push_back(dis(gen));
    }

}
// Get function
std::vector<double> Uniform :: get_sample() const
{
    return U_m;
}
double Uniform :: get_mean() const
{
    return mean_uniform;
}
double Uniform ::  get_var() const
{
    return var_uniform ;
}