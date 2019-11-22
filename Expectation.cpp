//
// Created by emma-hoggett on 22/11/2019.
//

#include "Expectation.hpp"

Expectation::Expectation(): pvec_U() {}
Expectation::~Expectation() {}


void Expectation::SetVector(vector<double> vec_U) {
    vector<double>::const_iterator c;
    pvec_U.clear();
    pvec_U.reserve(vec_U.size());
    for (c = vec_U.begin(); c!=vec_U.end(); c++){
        pvec_U.push_back(c*);
    }
}

