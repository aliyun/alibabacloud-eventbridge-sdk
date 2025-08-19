cmake_minimum_required(VERSION 3.14)
project(cpp_sample)
set(CMAKE_INSTALL_PREFIX "/usr")
#MESSAGE( STATUS "CMAKE_INSTALL_RPATH: " "${CMAKE_INSTALL_PREFIX}/local/lib" )
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)

# 如果无法正常找到依赖可通过如下示例为 SDK 找到依赖
#link_directories(/usr/local/lib
#    /usr/local/opt/openssl@1.1/lib)
#include_directories(/usr/local/include
#    /usr/local/opt/openssl@1.1/include
#    ./include)

set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
#MESSAGE( STATUS "CMAKE_INSTALL_RPATH: " "${CMAKE_INSTALL_PREFIX}/lib" )
ADD_DEFINITIONS(-std=c++11)

add_executable(cpp_sample
    src/sample.cpp)



find_package(Boost REQUIRED COMPONENTS random system thread filesystem chrono atomic date_time regex)
find_library(CPPREST_LIB cpprest)

target_link_libraries(cpp_sample
    crypto
    curl
    jsoncpp
    uuid
    darabonba_util
    alibabacloud_open_api_util
    alibabacloud_credential
    alibabacloud_endpoint_util
    darabonba_core
    alibabacloud_event_bridge
    alibabacloud_event_bridge_util
    ${Boost_LIBRARIES}
    ${CPPREST_LIB})



