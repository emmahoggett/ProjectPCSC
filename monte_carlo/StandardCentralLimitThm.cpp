/*
 * StandardCentralLimitThm.cpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "StandardCentralLimitThm.hpp"
#include "boost/math/distributions/normal.hpp"

StandardCentralLimitThm::StandardCentralLimitThm() :
verification(false) , upper_bound(0) , lower_bound(0) , m_alpha(0.05)
{}


StandardCentralLimitThm::~StandardCentralLimitThm() {}

void StandardCentralLimitThm::calculate_CentralLimitThm(const Random_variable* sample, const double expectation_sample, const double alpha)
{
    m_alpha =alpha ;
    auto vec_U = sample-> get_sample();
    auto size_N = sample-> get_size() ;
    auto true_mean = sample->get_mean();
    auto variance = sample->get_var();
    double sigma;
    sigma = sqrt(variance);
    double C_alpha;
    boost::math::normal dist(0.0,1.0) ;
    C_alpha =  quantile(dist , 1- m_alpha/2.);

    lower_bound = expectation_sample-(C_alpha*sigma/sqrt(size_N)) ;
    upper_bound = expectation_sample+(C_alpha*sigma/sqrt(size_N)) ;

    if ((true_mean >= lower_bound) && (true_mean <= upper_bound)){
        verification = true ;
    }
    else {
        verification = false ;
    }

}

bool StandardCentralLimitThm::is_verified() const
{
    return verification ;
}

vector<double> StandardCentralLimitThm::get_interval() const
{
    vector<double> interval ;
    interval.push_back(lower_bound);
    interval.push_back(upper_bound);
    return interval ;
}
void StandardCentralLimitThm::visualization(ostream &flux) const
{
    if( verification )
    {
        flux<<"The central limit theorem is respected, the confidence interval is :  \n" ;
        flux<<"\t The upper bound is :"<<upper_bound<<"\n" ;
        flux<<"\t The lower bound is :"<<lower_bound<<"\n" ;
        flux<<"\t The size of the confidence interval is :"<< upper_bound - lower_bound <<"\n" ;

    }
    else
    {
        flux<<"The central limit theorem isn't respected, the confidence interval is :  :\n" ;
        flux<<"\t The upper bound is :"<<upper_bound<<"\n" ;
        flux<<"\t The lower bound is :"<<lower_bound<<"\n" ;
        flux<<"\t The size of the confidence interval is :"<< upper_bound - lower_bound <<"\n" ;
    }

}