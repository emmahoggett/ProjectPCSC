/*
 * Moment.cpp
 *
 *  Created on: Nov 25, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "Moment.hpp"

Moment::Moment() {}

Moment::~Moment() {}

void Moment::getMoment(std::ofstream &stream, Random_variable *sample, int order) const {
    double mean = sample -> get_mean();
    vector<double> vec_U = sample-> get_sample();
    int size_N = vec_U.size();
    stream << "order,moment\n";

    for (int i = 1; i <= order; ++i) {
        double sum = 0;
        for (int j = 0; j < size_N; ++j) {
            sum+=pow(vec_U[j]-mean, i);
        }
        stream << i <<","<< sum << "\n";
    }

}

