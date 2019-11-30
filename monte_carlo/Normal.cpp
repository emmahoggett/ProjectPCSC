/*
 * Normal.cpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "Normal.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <boost/math/special_functions/erf.hpp>

Normal :: Normal() :
Uniform() ,mean_normal(0.0) , var_normal(1.0)
{
    unsigned int N = getSizeVector();
    std::vector<double> U_m = get_sample();
    for (int i = 0; i < N; ++i) {
        N_m.push_back( sqrt(2)*erf(2*U_m[i]) );
    }
}


Normal :: Normal(double mu):
Uniform() ,mean_normal(mu)
{
    double var;
    try {
        var = getVariance();
    }
    catch (Exception& err){
        err.PrintDebug();
        std::cout <<"Order should be an unsigned integer\n";
        std::cout <<"Give alternative unsigned integer \n";
        var = getVariance();
    }

    var_normal = var;
    unsigned int N = getSizeVector();
    for (int i = 0; i < N; ++i) {
        N_m.push_back( mu + sqrt(var)*sqrt(2)*erf(2*U_m[i]) );
    }
}

double Normal::getPosDouble(double &num, std::string &type_val) const {
    if (num <= 0){
        throw (Exception("INPUT", type_val + "is unsigned"));
    } else {
        return num;
    }
}

double Normal::getVariance() {
    double num;
    std::cout <<"Variance: \t";
    std::cin >> num;
    std::cin.ignore(80, '\n');
    std::string variable = "Variance";
    return getPosDouble(num,variable);
}

