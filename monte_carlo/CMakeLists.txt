project(monte_carlo)

set(HEADER_FILES
        AbstCentralLimitThm.hpp
        AbstExpectation.hpp
        Error.hpp
        Moment.hpp
        MonteCarloExpectation.hpp
        Normal.h
        Random_variable.h
        StandardCentralLimitThm.hpp
        Uniform.h
        AbstInput.hpp
        InputNormal.hpp
        AbstOutput.h
        Convergence.h
        )

set(SOURCE_FILES
        AbstCentralLimitThm.cpp
        AbstExpectation.cpp
        Error.cpp
        Moment.cpp
        MonteCarloExpectation.cpp
        Normal.cpp
        StandardCentralLimitThm.cpp
        Uniform.cpp
        AbstInput.cpp
        InputNormal.cpp
        Convergence.cpp
        )

add_library(monte_carlo STATIC ${SOURCE_FILES} ${HEADER_FILES})
