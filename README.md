# Monte Carlo Algorithm

### Description
This project is a familiarization of C++ use. The aim of this project is to create a Monte Carlo Algorithm as modular as possible. The following goals throught this project have been reached:
* Implementation of random number generators with a normal & uniform probability distribution.
* Compute the expectation value of a user defined function.
* Build `.csv` with statistical moments and the convergence of the CTL.
* Verification of the central limit theorem (CTL).

### Getting Started
This version was designed for C++ 14 or higher and python 3.6.6 or higher. 

To run the model's calculation, it is only needed to execute the executable `./monte_carlo_run` .The code should return a `OutputMoment.csv` file with moments results and `OutputCTL.csv` which returns the parameters of the user.

Then to plot the result, it is only needed to run `graph.py`, that will give two graphs: `Moment.png`, which is the moment as function of the order & `Convergence.png`, which gives the parameters of the distribution.

### Prerequisites

#### Input file
The program is designed with a default file input named `DefaultNormal.dat`. The user can however build his own data file. The name of the file need to be precised before launching the code.

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
* AbstCentralLimitThm & StandardCentralLimitThm
* Random_variable , Uniform & Normal 
* AbstExpectation & MonteCarloExpectation
* AbstOutput, Moment & Convergence
* Error

All those files are in the repository `\monte_carlo`


#### Python Code
The Python code needs the two csv file:

* `OutputCTL.csv`
* `OutputMoment.csv`

Those two files can be found by the user into the direct repository of the project. 

### Addtional content
The code also contains google test files that test each error management. There are several executable that can be launched for this task:
* `./runBasicMonteCarloTest` : test all error management of the code.
* 

### Documentation
* [Guide to Scientific Computing in C++] (https://link.springer.com/book/10.1007/978-1-4471-2736-9)
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
