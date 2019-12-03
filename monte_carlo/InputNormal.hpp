/*
 * InputNormal.hpp
 *
 *  Created on: Dec 02, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#ifndef INPUTNORMAL_HPP_
#define INPUTNORMAL_HPP_

#include "AbstInput.hpp"
#include "Normal.h"
#include "Random_variable.h"

#include <iostream>
#include <fstream>
#include <string>

class InputNormal:public AbstInput{
public:
    InputNormal();
    virtual ~InputNormal();

    virtual void read(Random_variable* &pRandomVar, double&alpha, int&moment, const char *file_name) override ;
    virtual void read(Random_variable* &pRandomVar, double&alpha, int&moment) override ;

};

#endif /*INPUTNORMAL_HPP_*/
