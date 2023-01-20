cmake_minimum_required(VERSION 3.14)

project(lesson22_override LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(lesson22_override
  main.cpp
  felline.cpp
  felline.h
  lion.h
  lion.cpp
)
target_link_libraries(lesson22_override Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS lesson22_override
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
