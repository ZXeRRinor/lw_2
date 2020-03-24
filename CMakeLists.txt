cmake_minimum_required(VERSION 3.16.4)
project(TripCalculator)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 20)

find_package(Qt5Core)
find_package(Qt5Widgets)

# Определяем цель сборки
add_executable(TripCalculator main.cpp ${QT_TEST_UI_HEADERS} TripCalculator.h TripCalculator.cpp)    # Исполняемые файлы
target_link_libraries(TripCalculator ${Qt5Core_LIBRARIES} ${Qt5Widgets_LIBRARIES})