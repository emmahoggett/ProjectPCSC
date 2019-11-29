include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# The next lines represent a list of all the executables in the folder (chapter)
# There is typically one executable per exercise.
# As you solve exercises, you need to add them here.
# The syntax is add_executable(executable_name source_file_name)

find_package(Boost)
find_package(gtest)
add_executable(main main.cpp AbstExpectation.cpp MonteCarloExpectation.cpp AbstCentralLimitThm.cpp StandardCentralLimitThm.cpp Moment.cpp Normal.cpp Uniform.cpp)
add_executable(test_random_var test_random_variable.cpp Normal.cpp Uniform.cpp Random_variable.h)
