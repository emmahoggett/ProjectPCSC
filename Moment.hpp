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
#include "Random_variable.hpp"

using namespace std;
class Moment{
public:
    Moment();
    virtual ~Moment();

    void getMoment(ofstream& stream, const Random_variable* sample, const order)const;

};
#endif /*MOMENT_HPP_*/
