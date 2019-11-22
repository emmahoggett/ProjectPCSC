//
// Created by emma-hoggett on 22/11/2019.
//

#ifndef EXPECTATION
#define EXPECTATION

#include <iostream>
#include <vector>

using namespace std;

class Expectation{
public:
    // Constructor and destructor
    Expectation();
    virtual ~Expectation();

    // Other public methods
    void SetVector(vector<double> vec_U);

    virtual double GetExpectation() = 0;

protected:
    vector<double> pvec_U;

};

#endif //EXPECTATION
