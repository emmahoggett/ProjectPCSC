# Monte Carlo Algorithm

### Description
This project is a familiarization of C++ use. The aim of this project is to create a Monte Carlo Algorithm as modular as possible. The following goals throught this project have been reached:
* Implementation of random number generators with a normal & uniform probability distribution.
* Compute the expectation value of a user defined function.
* Build `.csv` with statistical moments and the convergence of the CTL.
* Verification of the central limit theorem (CTL).

### Getting Started
This version was designed for C++ 14 or higher and . To run the model's calculation, it is only needed to execute the file `main.cpp` The code should return a `OutputMoment.csv` file with moments results and `OutputCTL.csv` which returns the parameters of the user.
Then to plot the result, it is only needed to run `graph.py`, that will give two graphs: `Moment.png`, which is the moment as function of the order & `ConvergenceThreshold.png`, which gives the 

### Prerequisites

#### Input file
The input file is structured this way:
1. The size of the vector
2. The mean of the normal distribution
3. The variance of the normal distribution

The following values are set by default:
4. The confidence interval
5. The order computed for the moment

!!Warning!! The code was designed only for uniform and normal distribution input. If another type of input is needed, add a child to `AbstInput`.


#### C++ Code
To avoid dysfunctions, a boost package is a added to the project to compute the normal function. To install this package, launch into Unix terminal: `sudo apt-get install libboost-all-dev` 

The code also need the C++ file (`.cpp`) and prototypes (`.h`\ `.hpp`) of the following classes:
* AbstCentralLimitThm & StandardCentralLimitThm
* Random_variable , Uniform & Normal 
* Expectation & MonteCarloExpectation
* Moment
* Exception

*Note: Random_variable hasn't got a C++ file, because it is an abstract class*



#### Python Code
The Python code needs the two csv file:
*`OutputCTL.csv`
*`OutputMoment.csv`

### Additional content
The project also contains a test file....

### Documentation
* [Guide to Scientific Computing in C++] (https://moodle.epfl.ch/pluginfile.php/1729799/mod_resource/content/1/Textbook.pdf)
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
