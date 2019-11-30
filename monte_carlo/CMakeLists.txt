project(monte_carlo)

set(HEADER_FILES
        AbstCentralLimitThm.hpp
        AbstExpectation.hpp
        Moment.hpp
        MonteCarloExpectation.hpp
        Normal.h
        Random_variable.h
        StandardCentralLimitThm.hpp
        Uniform.h
        Exception.hpp
        )

set(SOURCE_FILES
        AbstCentralLimitThm.cpp
        AbstExpectation.cpp
        Moment.cpp
        MonteCarloExpectation.cpp
        Normal.cpp
        StandardCentralLimitThm.cpp
        Uniform.cpp
        Exception.hpp
        )

add_library(monte_carlo STATIC ${SOURCE_FILES} ${HEADER_FILES})