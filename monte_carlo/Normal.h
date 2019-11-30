//
// Created by pierr on 23/11/2019.
//

#ifndef MONTE_CARLO_NORMAL_GENERATOR_H
#define MONTE_CARLO_NORMAL_GENERATOR_H

#include "Uniform.h"

class Normal : public Uniform {
public:

    Normal(const unsigned int N );
    Normal(const unsigned int N , const double mu , const double var);

    // Get function
    virtual std::vector<double> get_sample() const ;
    virtual double get_mean() const ;
    virtual double get_var() const ;

private:
    std::vector<double> N_m ;

    // elles ont le meme nom que dans la classe mere ?
    double mean_normal ;
    double var_normal ;
};

#endif //MONTE_CARLO_NORMAL_GENERATOR_H
