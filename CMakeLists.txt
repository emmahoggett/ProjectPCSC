project(ProjectPCSC)

cmake_minimum_required(VERSION 3.10)

include_directories(monte_carlo)

add_subdirectory(monte_carlo_test)
add_subdirectory(monte_carlo)

set(SOURCE_FILES main.cpp)
add_executable(monte_carlo_run ${SOURCE_FILES})

target_link_libraries(monte_carlo_run monte_carlo)


