/*
 * Moment.cpp
 *
 *  Created on: Nov 25, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */

#include "Moment.hpp"

Moment::Moment() {}

Moment::~Moment() {}

void Moment::getMoment(std::ofstream &stream, Random_variable *sample) const {
    double mean = sample -> get_mean();
    vector<double> vec_U = sample-> get_sample();
    int size_N = vec_U.size();
    int order;
    try {
        order = getOrder();
    }
    catch (Exception& err){
        err.PrintDebug();
        std::cout <<"Order should be an unsigned integer\n";
        std::cout <<"Give alternative unsigned integer \n";
        order = getOrder();

    }

    for (int i = 1; i <= order; ++i) {
        double sum = 0;
        for (int j = 0; j < size_N; ++j) {
            sum+=pow(vec_U[j]-mean, i);
        }
        stream << i <<" "<< sum << "\n";
    }
}

int Moment::getPosInt(double &num, std::string &type_val)const {
    if (num == static_cast<int>(num)){
        int size = static_cast<int>(num);
        if (size <= 0){
            throw (Exception("INPUT", type_val + "is unsigned"));
        } else {
            return size;
        }
    } else{
        throw (Exception("INPUT",type_val +" is an integer"));
    }
}

int Moment::getOrder()const {
    double num;
    std::cout <<"Order for the moment: \t";
    std::cin >> num;
    std::cin.ignore(80, '\n');
    std::string variable = "Order";
    return getPosInt(num,variable);
}