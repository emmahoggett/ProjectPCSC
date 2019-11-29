//
// Created by pierr on 26/11/2019.
//
#include <iostream>
#include "Random_variable.h"
#include "Uniform.h"
#include "Normal.h"
int main()
{
    Random_variable* rvs(0) ;
    rvs = new Uniform(10);
    rvs->get_mean();
    rvs->get_var();

}