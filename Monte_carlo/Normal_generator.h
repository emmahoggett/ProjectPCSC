//
// Created by pierr on 23/11/2019.
//

#ifndef MONTE_CARLO_NORMAL_GENERATOR_H
#define MONTE_CARLO_NORMAL_GENERATOR_H
class Normal_generator : public Uniform_generator {
public:
    Normal_generator(const unsigned int N );
    Normal_generator(const unsigned int N , const double mu , const double sigma)

    // Get function
    vector<double> Get_sample() const ;
    virtual double Get_mean() const ;
    virtual double Get_var() const ;

private:
    vector<double> N_m ;

    // elles ont le meme nom que dans la classe mere ?
    double mean_normal ;
    double sigma_normal ;
};

#endif //MONTE_CARLO_NORMAL_GENERATOR_H
