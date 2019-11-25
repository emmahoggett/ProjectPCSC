//
// Created by pierr on 25/11/2019.
//

#ifndef MONTE_CARLO_RANDOM_VARIABLE_H
#define MONTE_CARLO_RANDOM_VARIABLE_H

#include <vector>
class Random_variable {

public:
    std::vector<double> get_sample() const =0 ;
    virtual double get_mean() const =0;
    virtual double get_var() const =0;

};
#endif //MONTE_CARLO_RANDOM_VARIABLE_H
