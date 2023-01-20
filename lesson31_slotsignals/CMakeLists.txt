cmake_minimum_required(VERSION 3.14)

project(lesson31_slotsignals LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(lesson31_slotsignals
  main.cpp
  destination.cpp
  destination.h
  source.cpp
  source.h
)
target_link_libraries(lesson31_slotsignals Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS lesson31_slotsignals
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
