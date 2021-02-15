cmake_minimum_required(VERSION 3.10)

project(chiara VERSION 1.3)

option(USE_MYLIB "Use Mylib" ON)

configure_file(version.h.in version.h)

add_subdirectory(lib)

add_executable(chiara chiara.c)

target_link_libraries(chiara PUBLIC lib)
target_include_directories(chiara PUBLIC 
			"${PROJECT_BINARY_DIR}"
			"${PROJECT_SOURCE_DIR}/lib")

