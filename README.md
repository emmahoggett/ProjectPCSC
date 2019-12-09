# Monte Carlo Algorithm

### Description
This project is a familiarization of C++ use. The aim of this project is to create a Monte Carlo Algorithm as modular as possible. The following goals through this project have been reached:
* Implementation of random number generators with a normal & uniform probability distribution.
* Compute the expectation value of a user defined function.
* Build `.csv` with statistical moments and the convergence of the CLT.
* Verification of the Central Limit Theorem (CLT).

### Getting Started
This version was designed for C++ 14 or higher and python 3.6.6 or higher. 

To run the model's calculation, it is only needed to execute the executable `./monte_carlo_run` .The code should return a `OutputMoment.csv` file with moments results and `OutputCTL.csv` which returns the parameters of the user.

Then to plot the result, it is only needed to run `graph.py`, that will give two graphs: `Moment.png`, which is the moment as function of the order & `Convergence.png`, which gives the covergence parameters of the distribution.

### Prerequisites

#### Input file
The program is designed with a default file input named `DefaultNormal.dat`. The user can however build his own data file. The name of the file need to be precised before launching the code as a program argument.

The input file needs to be structured this way:
1. The size of the vector : a strictly positive integer
2. The mean of the normal distribution : a float number
3. The variance of the normal distribution : a strictly positive float number

The following values are set by default:
4. The confidence interval : a float number between ]0,1[
5. The order computed for the moment : a strictly positive integer

!!Warning!! The code was designed only for uniform and normal distribution input. If another type of input is needed, add new classes to the original architecture.

#### C++ Code
To avoid dysfunctions, a boost package is a added to the project to compute the normal function. To install this package, launch into Unix terminal: `sudo apt-get install libboost-all-dev` 

The code also need the C++ file (`.cpp`) and prototypes (`.h`\ `.hpp`) of the following classes:
* AbstInput, InputUniform & InputNormal
* AbstCentralLimitThm & StandardCentralLimitThm
* Random_variable , Uniform & Normal 
* AbstExpectation & MonteCarloExpectation
* AbstOutput, Moment & Convergence
* Error

All those files are in the repository `\monte_carlo\`


#### Python Code
The Python code needs the two csv file:

* `OutputCTL.csv`
* `OutputMoment.csv`

Those two files can be found by the user into the direct repository of the project. 

### Additional content
The code also contains google test files that test each error management and the well behavior of all the functions. They can be found by the user in `/monte_carlo_test/basic_test/` repository. There are `.cpp` file that can be launched for this task:
* `runAllTest` : run all the test of the project .
The different test are :
* `Uniform_test`: test the entry values of the uniform distribution (interval & vector's size), also test each function of the class.
* `Normal_test` : test the entry values of the normal (variance, mean & vector's size), also test each function of the class.
* `MonteCarloExpectation_test` : test if the mean computed by the monte carlo method is close enough to the mean (~0.1 error) given by the user.
* `StandardCentralLimitThm_test` : test if the theorem is respected for a large vector size.
* `Input_test` : test values entered in a desired file for the normal distribution and the uniform distribution. 

### Documentation
* [List of probability distributions](https://en.wikipedia.org/wiki/List_of_probability_distributions)
* [Normal distribution](https://en.wikipedia.org/wiki/Normal_distribution)
* [Uniform distribution (continuous)](https://en.wikipedia.org/wiki/Uniform_distribution_(continuous))
* [Expected value](https://en.wikipedia.org/wiki/Expected_value)
* [Statistical Moments](http://geog.uoregon.edu/GeogR/topics/moments.pdf)
* [Central limit theorem](https://en.wikipedia.org/wiki/Central_limit_theorem)

### Authors
* Hoggett Emma : emma.hoggett@epfl.ch
* Vuillecard Pierre : pierre.vuillecard@epfl.ch


### Project Status
The project was submitted on the 13 December 2019, as part of the [Programming Concepts in Scientific Computing](https://edu.epfl.ch/coursebook/fr/programming-concepts-in-scientific-computing-MATH-458) course.
