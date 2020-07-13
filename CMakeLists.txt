cmake_minimum_required(VERSION 3.10)
project(ppgsql LANGUAGES CXX)

set(PPGSQL_LIBS ${CMAKE_SOURCE_DIR}/src)

add_subdirectory(src)

set(COMMON_LIBS terminal)

add_executable(ppgsql.exe src/main.cpp )
target_link_libraries(ppgsql.exe PRIVATE ${COMMON_LIBS})
target_compile_features(ppgsql.exe PRIVATE cxx_std_11 )
target_include_directories(ppgsql.exe PRIVATE ${PPGSQL_LIBS}/terminal)

# add_subdirectory(tests)
