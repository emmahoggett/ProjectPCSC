/*
 * InputUniform.cpp
 *
 *  Created on: Dec 09, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "InputUniform.hpp"

InputUniform::InputUniform() {}

InputUniform::~InputUniform() {}

void InputUniform::read(Random_variable *&pRandomVar, double &alpha, int &moment, const char *file_name) {
    std::ifstream read_input (file_name);
    if (!read_input.is_open()){
        throw Error("FILE", "File can't be opened");
    }
    read_input.clear();
    int N;
    double a;
    double b;
    read_input >> N;
    if ((read_input.fail())|| (N <= 0)){
        throw Error("VARIABLE","The vector's size needs to be a positive integer");
    }
    read_input >> a;
    if (read_input.fail()){
        throw Error("VARIABLE","The lower bound needs to be a float number");
    }

    read_input >> b;
    if ((read_input.fail())){
        throw Error("VARIABLE","The upper bound needs to be a float number");
    }
    else if (b <= a){
        throw Error("VARIABLE","The upper bound needs to be strictly greater then the previous value");
    }

    pRandomVar = new Uniform(N,a,b);

    if (read_input.eof()){
        alpha  = 0.05;
        moment = 4;
        std:: cout << "The confidence interval and the order for the moment are set as default:\n ";
        std:: cout << "- Confidence interval : 0.05 \n";
        std:: cout << "- Order : 4 \n";
    } else{
        read_input >> alpha;
        if ((read_input.fail()) || (alpha <= 0) || (alpha >= 1)){
            throw Error("VARIABLE","The confidence interval need to be a between ]0,1[");
        }

        read_input >> moment;
        if ((read_input.fail()) || (moment <= 0)){
            throw Error("VARIABLE","The order for the moment needs to be a positive integer");
        }
    }
}