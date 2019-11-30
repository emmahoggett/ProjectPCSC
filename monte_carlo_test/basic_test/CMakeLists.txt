include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

find_package(Boost)

if(COMMAND cmake_policy)
    cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)

add_executable(runBasicMonteCarloTests
        test_google_test.cpp
        )
add_executable(runBasicMonteCarloTests_2
        test_random_variable.cpp
        )
target_link_libraries(runBasicMonteCarloTests gtest gtest_main)
target_link_libraries(runBasicMonteCarloTests_2 monte_carlo)


