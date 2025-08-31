cmake_minimum_required(VERSION 3.15)
set(PROJECT_NAME "usd_cpp")
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 20)
add_compile_options(/utf-8)
add_definitions(-DNOMINMAX)

include_directories("C:/github/OpenUSD/include")

set(LIB_DIR "C:\\github\\OpenUSD\\lib")

file(GLOB ALL_LIB_FILES
        "${LIB_DIR}/*.lib"
)

set(Python_LOCATION "C:/Program Files/Python310")
include_directories("C:/Program Files/Python310/include")
list(APPEND CMAKE_PREFIX_PATH "C:/github/OpenUSD")
find_package(pxr REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE
        ${USD_LIBRARIES}
        ${ALL_LIB_FILES}
        "C:/Program Files/Python310/libs/python310.lib"
)