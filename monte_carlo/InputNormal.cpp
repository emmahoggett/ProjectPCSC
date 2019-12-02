/*
 * InputNormal.cpp
 *
 *  Created on: Dec 02, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "InputNormal.hpp"

InputNormal::InputNormal() {}

InputNormal::~InputNormal() {}

void InputNormal::read(Random_variable* &pRandomVar, double&alpha, int&moment, std::string file_name) {
    std::ifstream read_input (file_name);
    if (!read_input.is_open()){
        throw Error("FILE", "File can't be opened");
    }
    int N;
    double mu;
    double var;
    read_input >> N;
    if ((read_input.fail()) || (N <= 0)){
        std::cerr << "*Error* : Vector size should be a strictly positive integer.\n";
        std::cout << "Enter a new vector size:\t";
        std::cin >> N;
    }
    read_input >> mu;
    if (read_input.fail()){
        std::cerr << "*Error* : Mean should be a float number.\n";
        std::cout << "Enter a new mean:\t";
        std::cin >> mu;
    }

    read_input >> var;
    if ((read_input.fail()) || (var <= 0)){
        std::cerr << "*Error* : Variance should be a strictly positive float number.\n";
        std::cout << "Enter a new variance:\t";
        std::cin >> var;
    }

    pRandomVar = new Normal(N,mu,var);

    if (read_input.eof()){
        alpha  = 0.05;
        moment = 4;
        std:: cout << "The confidence interval and the order for the moment are set as default:\n ";
        std:: cout << "- Confidence interval : 0.05 \n";
        std:: cout << "- Order : 4 \n";
    } else{
        read_input >> alpha;
        if ((read_input.fail()) || (alpha <= 0) || (alpha >= 1)){
            std::cerr << "*Error* : Confidence interval should be between ]0,1[.\n";
            std::cout << "Enter a new confidence interval:\t";
            std::cin >> alpha;
        }

        read_input >> moment;
        if ((read_input.fail()) || (moment <= 0)){
            std::cerr << "*Error* : Order for the moment should be a strictly positive integer.\n";
            std::cout << "Enter a new order:\t";
            std::cin >> moment;
        }
    }
}

void InputNormal::read(Random_variable *&pRandomVar, double &alpha, int &moment) {
    read(pRandomVar, alpha, moment, "DefaultNormal.dat");
}