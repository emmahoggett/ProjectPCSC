/*
 * Exception.cpp
 *
 *  Created on: Nov 29, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "Exception.hpp"
#include <iostream>

Exception::Exception(std::string tagString, std::string probString) {
    mTag = tagString;
    mProblem = probString;
}

void Exception::PrintDebug() const {
    std::cerr << "** Error (" << mTag << ") **\n";
    std::cerr << "Problem: " << mProblem << "\n\n";
}