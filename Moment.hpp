/*
 * Moment.cpp
 *
 *  Created on: Nov 25, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef MOMENT_HPP_
#define MOMENT_HPP_

#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include "Random_variable.h"
#include "Normal.h"
#include "Uniform.h"

using namespace std;
class Moment{
    /*
     * Compute the moment of sample until the order given by the user.
     * The result is then put into an output stream
     *
     */
public:
    // Constructor and destructor
    Moment();
    virtual ~Moment();

    // Public method that compute moment of the sample until the order. The result is
    void getMoment(ofstream& stream, Random_variable* sample)const;
    int getPosInt(double& num, std::string& type_val)const;
    int getOrder() const;


};
#endif /*MOMENT_HPP_*/
