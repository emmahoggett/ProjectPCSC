/*
 * CentralLimitThm.hpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef CENTRALLIMITTHM_HPP_
#define CENTRALLIMITTHM_HPP_

#include <iostream>
#include <vector>
#include <cmath>
#include "Random_variable.hpp"

using namespace std;

class AbstCentralLimitThm{
public:
    // Constructor and destructor
    AbstCentralLimitThm();
    virtual ~AbstCentralLimitThm();

    // Other public methods
    virtual double getCentralLimitThm() = 0;

    void setAlpha(double new_alpha);
    double getAlpha()const { return p_alpha;}
private:
    double p_alpha;
};

#endif /*CENTRALLIMITTHM_HPP_*/
