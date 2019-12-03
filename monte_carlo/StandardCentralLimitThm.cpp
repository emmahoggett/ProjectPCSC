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


StandardCentralLimitThm::StandardCentralLimitThm(const Random_variable* sample,const double expectation_sample)
{
    double alpha =0.5 ;
    calculate_CentralLimiteThm(sample,expectation_sample,alpha);
}



StandardCentralLimitThm::StandardCentralLimitThm(const Random_variable* sample,const double expectation_sample, const double alpha)
{
    calculate_CentralLimiteThm(sample,expectation_sample , alpha);
}

StandardCentralLimitThm::~StandardCentralLimitThm() {}

void StandardCentralLimitThm::calculate_CentralLimitThm(const Random_variable* sample,const double expectation_sample, const double alpha)
{

    auto vec_U = sample-> get_sample();
    auto size_N = sample-> get_size() ;
    auto true_mean = sample->get_mean();
    auto variance = sample->get_var();
    double sigma;
    sigma = sqrt(variance);
    double C_alpha;
    boost::math::normal dist(0.0,1.0) ;
    C_alpha = quantile(dist,1- m_alpha/2);
    std::cout<<"le C "<<C_alpha<<"\n";
    interval.push_back(expectation_sample-(C_alpha*sigma/sqrt(size_N)));
    interval.push_back(expectation_sample+(C_alpha*sigma/sqrt(size_N)));

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
