cmake_minimum_required(VERSION 3.14)

project(lesson20_classes_inheritence LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(lesson20_classes_inheritence
  main.cpp
  cars.cpp
  suvs.cpp
  cars.h
  suvs.h
  pegout2008.cpp
  pegout2008.h
)
target_link_libraries(lesson20_classes_inheritence Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS lesson20_classes_inheritence
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
