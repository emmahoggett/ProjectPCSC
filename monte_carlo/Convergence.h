//
// Created by pierr on 06/12/2019.
//

#ifndef PROJECTPCSC_CONVERGENCE_H
#define PROJECTPCSC_CONVERGENCE_H

#include "AbstOutput.h"
#include "AbstCentralLimitThm.hpp"
#include "AbstExpectation.hpp"

class Convergence :  public AbstOutput {
public:
    Convergence(AbstCentralLimitThm* centralLimit_ , AbstExpectation* expectation_,Random_variable* sample_, const double alpha_);

    ~Convergence() ;

    virtual void writefile(const char *file_name ) const override ;

private:
    AbstCentralLimitThm* centralLimit ;
    AbstExpectation* expectation;
    Random_variable* sample ;
    double alpha ;

};
#endif //PROJECTPCSC_CONVERGENCE_H
