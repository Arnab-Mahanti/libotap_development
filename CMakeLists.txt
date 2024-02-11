cmake_minimum_required(VERSION 3.0.0)
project(libotap_development VERSION 0.1.0 LANGUAGES C CXX)
# include(CTest)
# enable_testing()

add_subdirectory(libotap)

file(GLOB_RECURSE LIBOTAP_DEVEL_SRC "libotap_development/src/*.cpp" "libotap_development/src/*.c" "libotap_development/src/*.h")
add_executable(libotap_development ${LIBOTAP_DEVEL_SRC})
target_include_directories(libotap_development PRIVATE libotap/src)
target_link_libraries(libotap_development)

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
