/*
 * AbstInput.hpp
 *
 *  Created on: Dec 02, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */


#ifndef ABSTINPUT_HPP_
#define ABSTINPUT_HPP_

#include <iostream>
#include <string>
#include "Error.hpp"
#include "Random_variable.h"
class AbstInput{
public:
    AbstInput();
    virtual ~AbstInput();

    virtual void read(Random_variable* &pRandomVar, double&alpha, int&moment, std::string file_name) = 0;
    virtual void read(Random_variable* &pRandomVar, double&alpha, int&moment) = 0;

};

#endif /*ABSTINPUT_HPP_*/
