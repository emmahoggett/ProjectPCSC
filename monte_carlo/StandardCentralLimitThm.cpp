/*
 * StandardCentralLimitThm.cpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "StandardCentralLimitThm.hpp"
#include "boost/math/distributions/normal.hpp"

StandardCentralLimitThm::StandardCentralLimitThm() {}




StandardCentralLimitThm::~StandardCentralLimitThm() {}

void StandardCentralLimitThm::calculate_CentralLimitThm(const Random_variable* sample,const double expectation_sample, const double alpha)
{

    auto vec_U = sample-> get_sample();
    auto size_N = sample-> get_size() ;
    auto true_mean = sample->get_mean();
    auto variance = sample->get_var();
    double sigma;
    double quantile;
    sigma = sqrt(variance);
    quantile = 1-alpha/2;
    interval.push_back(expectation_sample-(quantile*sigma/sqrt(size_N)));
    interval.push_back(expectation_sample+(quantile*sigma/sqrt(size_N)));

    if ((true_mean >= interval[0]) && (true_mean <= interval[1])){
        std::cout << "The central limit theorem is respected.\n"
                     "Central limit theorem finished successfully.\n"<< std::endl ;
        verification = true ;
    }
    else {
        std::cout << "The central limit theorem isn't respected.\n"
                     "Central limit theorem finished successfully.\n"<< std::endl ;
        verification = true ;
    }

}

bool StandardCentralLimitThm::is_verified() const
{
    return verification ;
}
vector<double> StandardCentralLimitThm::get_interval() const
{
    return interval ;
}
