cmake_minimum_required(VERSION 3.10)

# Указать имя проекта
project(MyDynamicLibrary)

# Указать стандарт C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Указать пути к директориям
include_directories(include)

# Указать исходные файлы для библиотеки
set(SOURCES
    src/funktion.cpp
    src/prog1.cpp
)

# Создать динамическую библиотеку
add_library(MyLibrary SHARED ${SOURCES})

# Указать опционально параметры установки
install(TARGETS MyLibrary DESTINATION lib)
install(FILES include/funktion.h DESTINATION include)
