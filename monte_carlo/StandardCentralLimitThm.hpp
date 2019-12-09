/*
 * StandardCentralLimitThm.hpp
 *
 *  Created on: Nov 22, 2019
 * 	   Authors: Hoggett Emma <emma.hoggett@epfl.ch> &
 * 	            Vuillecard Pierre <pierre.vuillecard@epfl.ch>
 */


#ifndef STANDARDCENTRALLIMITTHM_HPP_
#define STANDARDCENTRALLIMITTHM_HPP_

#include "AbstCentralLimitThm.hpp"
#include "Random_variable.h"
#include "Normal.h"
#include "Uniform.h"
#include <vector>
/**
 * \brief Contains methods for standard central limit theorem.
 *
 * Child of AbstCentralLimitThm.
 */
class StandardCentralLimitThm: public AbstCentralLimitThm{
public:
    /**
     * \brief Default constructor.
     */
    StandardCentralLimitThm();
    /**
     * \brief Default destructor.
     */
    virtual ~StandardCentralLimitThm();

    /**
     * \brief Check if the central limit theorem is completed.
     * @param sample : Pointer of Random variable, which gives a vector and the parameter of the vectors
     * distribution.
     * @param expectation_sample : Float number, which is the expectation of the vector in Random variable.
     * @param alpha : Float number between ]0,1[, which correspond to the confidence interval.
     */
    virtual bool is_verified() const ;

    /**
     * \brief Return the interval of the central limit theorem.
     * @return Vector of float numbers, which contains the interval of the central limit theorem.
     */
    virtual vector<double> get_interval() const ;

    /**
     * \brief Compute the central limit parameters.
     *
     * And check if the central limit is completed or not.
     * @param sample : Pointer of Random variable, which gives a vector and the parameter of the vectors
     * distribution.
     * @param expectation_sample : Float number, which is the expectation of the vector in Random variable.
     * @param alpha : Float number between ]0,1[, which correspond to the confidence interval.
     */
    virtual void calculate_CentralLimitThm(const Random_variable* sample,const double expectation_sample, const double alpha);

    /**
     * \brief Visualized the central limit calculation :
     * @param the output stream
     */
    virtual void visualization(ostream &flux) const override ;

private:
    bool verification ;
    double upper_bound ;
    double lower_bound ;
    double m_alpha;

};
#endif /*STANDARDCENTRALLIMITTHM_HPP_*/
