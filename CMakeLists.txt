cmake_minimum_required(VERSION 3.10)

project(chiara VERSION 1.3)

option(USE_MYLIB "Use Mylib" ON)

configure_file(version.h.in version.h)

if(USE_MYLIB)
	add_subdirectory(lib)
	list(APPEND MYLIB_LIB lib)
	list(APPEND MYLIB_INC "${PROJECT_SOURCE_DIR}/lib")
endif()	

add_executable(chiara chiara.c)

# link
target_link_libraries(chiara PUBLIC ${MYLIB_LIB})

# include dir
target_include_directories(chiara PUBLIC "${PROJECT_BINARY_DIR}"
	${MYLIB_INC}
)

