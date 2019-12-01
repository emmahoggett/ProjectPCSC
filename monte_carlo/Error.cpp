/*
 * Error.cpp
 *
 *  Created on: Nov 29, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "Error.hpp"
#include <iostream>

Error::Error(std::string tagString, std::string probString) {
    mTag = tagString;
    mProblem = probString;
}

void Error::PrintDebug() const {
    std::cerr << "** Error (" << mTag << ") **\n";
    std::cerr << "Problem: " << mProblem << "\n\n";
}