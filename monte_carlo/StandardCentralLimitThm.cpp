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
verification(false) , upper_bound(0) , lower_bound(0) , m_alpha(0.05) , true_mean_exist(true)
{}


StandardCentralLimitThm::~StandardCentralLimitThm() {}

void StandardCentralLimitThm::calculate_CentralLimitThm(const Random_variable* sample, AbstExpectation* expectation, const double alpha)
{
    m_alpha =alpha ;
    double compute_mean = expectation->calculate_expectation(sample);
    auto vec_U = sample-> get_sample();
    auto size_N = sample-> get_size() ;
    double C_alpha;
    boost::math::normal dist(0.0,1.0) ;
    C_alpha =  quantile(dist , 1- m_alpha/2.);
    double sigma;
    if( expectation->isFunctionLin())
    {
        // Approximation of the standard deviation
        double tmp(0) ;
        for(auto vec : vec_U)
        {
            tmp += pow(vec-compute_mean , 2);
        }
        sigma = sqrt(tmp/(size_N-1)) ;
        true_mean_exist = false ;
    } else
    {
        auto variance = sample->get_var();
        sigma = sqrt(variance);
        true_mean_exist = true ;
    }

    lower_bound = compute_mean-(C_alpha*sigma/sqrt(size_N)) ;
    upper_bound = compute_mean+(C_alpha*sigma/sqrt(size_N)) ;

    if(true_mean_exist)
    {
        auto true_mean = sample->get_mean() ;
        if ((true_mean >= lower_bound) && (true_mean <= upper_bound)){
            verification = true ;
        }
        else {
            verification = false ;
        }
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
    if(true_mean_exist)
    {
        if( verification )
        {
            flux<<"The central limit theorem is respected \n";
            flux<<"The true mean E[X] has probability "<<1-m_alpha<<" to be in confidence interval defined as : \n" ;
            flux<<"\t The upper bound is :"<<upper_bound<<"\n" ;
            flux<<"\t The lower bound is :"<<lower_bound<<"\n" ;
            flux<<"\t The size of the confidence interval is :"<< upper_bound - lower_bound <<"\n" ;

        }
        else
        {
            flux<<"The central limit theorem isn't respected, the confidence interval is : \n" ;
            flux<<"\t The upper bound is :"<<upper_bound<<"\n" ;
            flux<<"\t The lower bound is :"<<lower_bound<<"\n" ;
            flux<<"\t The size of the confidence interval is :"<< upper_bound - lower_bound <<"\n" ;
        }
    }else
    {
        flux<<"The true mean E[f(X)] has probability "<<1-m_alpha<<" to be in the confidence interval defined as : \n";
        flux<<"\t The upper bound is :"<<upper_bound<<"\n" ;
        flux<<"\t The lower bound is :"<<lower_bound<<"\n" ;
        flux<<"\t The size of the confidence interval is :"<< upper_bound - lower_bound <<"\n" ;
    }


}