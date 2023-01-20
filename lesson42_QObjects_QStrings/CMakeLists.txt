cmake_minimum_required(VERSION 3.14)

project(lesson42_QObjects_QStrings LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(lesson42_QObjects_QStrings
  main.cpp
)
target_link_libraries(lesson42_QObjects_QStrings Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS lesson42_QObjects_QStrings
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
