CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

set(CMAKE_C_COMPILER /usr/bin/clang)
set(CMAKE_CXX_COMPILER /usr/bin/clang++)

project(proto_test)
set(CMAKE_CXX_STANDARD 11)

find_package(Protobuf REQUIRED)
INCLUDE_DIRECTORIES(${PROTOBUF_INCLUDE_DIR})

add_subdirectory(proto)

# 这一句的意义在于可以找到proto新建出来的c++代码
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

add_executable(write_data src/writter.cpp)
TARGET_LINK_LIBRARIES(write_data proto ${PROTOBUF_LIBRARIES})

add_executable(read_data src/reader.cpp)
TARGET_LINK_LIBRARIES(read_data proto ${PROTOBUF_LIBRARIES})