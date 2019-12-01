project(monte_carlo)

set(HEADER_FILES
        AbstCentralLimitThm.hpp
        AbstExpectation.hpp
        Exception.hpp
        Moment.hpp
        MonteCarloExpectation.hpp
        Normal.h
        Random_variable.h
        StandardCentralLimitThm.hpp
        Uniform.h
        )

set(SOURCE_FILES
        AbstCentralLimitThm.cpp
        AbstExpectation.cpp
        Exception.cpp
        Moment.cpp
        MonteCarloExpectation.cpp
        Normal.cpp
        StandardCentralLimitThm.cpp
        Uniform.cpp
        )

add_library(monte_carlo STATIC ${SOURCE_FILES} ${HEADER_FILES})