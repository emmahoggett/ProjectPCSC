include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

find_package(Boost)

if(COMMAND cmake_policy)
    cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)

add_executable(runAllTests
        Uniform_test.cpp
        Normal_test.cpp
        MonteCarloExpectation_test.cpp
        StandardCentralLimitThm_test.cpp
        Input_test.cpp )

add_executable(Input_test
        Input_test.cpp )

add_executable(Uniform_test
        Uniform_test.cpp)

add_executable(Normal_test
        Normal_test.cpp)

add_executable(MonteCarloExpectation_test
        MonteCarloExpectation_test.cpp)

add_executable(StandardCentralLimitThm_test
        StandardCentralLimitThm_test.cpp)

target_link_libraries(runAllTests gtest gtest_main monte_carlo )
target_link_libraries(Input_test  gtest gtest_main monte_carlo )
target_link_libraries(Uniform_test  gtest gtest_main monte_carlo )
target_link_libraries(Normal_test  gtest gtest_main monte_carlo )
target_link_libraries(MonteCarloExpectation_test  gtest gtest_main monte_carlo )
target_link_libraries(StandardCentralLimitThm_test  gtest gtest_main monte_carlo )



