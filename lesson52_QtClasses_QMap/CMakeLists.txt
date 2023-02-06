cmake_minimum_required(VERSION 3.14)

project(lesson52_QtClasses_QMap LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(lesson52_QtClasses_QMap
  main.cpp
  pet.cpp
  pet.h
)
target_link_libraries(lesson52_QtClasses_QMap Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS lesson52_QtClasses_QMap
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
