/*
 * Expectation.hpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef EXPECTATION_HPP_
#define EXPECTATION_HPP_

#include <iostream>
#include <vector>

using namespace std;

class Expectation{
public:
    // Constructor and destructor
    Expectation();
    virtual ~Expectation();

    // Other public methods
    void setVector(vector<double> vec_U);

    virtual double getExpectation() = 0;

    // Get methods
    vector<double> getVector() const { return pvec_U; }

private:
    vector<double> pvec_U;

};

#endif /*EXPECTATION_HPP_*/
