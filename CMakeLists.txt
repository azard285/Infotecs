cmake_minimum_required(VERSION 3.10)

# Укажите имя проекта
project(MyLibrary)

# Укажите папку с заголовочными файлами
include_directories(include)

# Создайте динамическую библиотеку
add_library(funktion SHARED src/funktion.cpp)

# Создайте исполняемую программу
add_executable(prog1 src/prog1.cpp)

# Свяжите исполняемую программу с библиотекой
target_link_libraries(prog1 PRIVATE funktion)
