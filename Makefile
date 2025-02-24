# Компилятор
CXX = g++
CXXFLAGS = -Wall -g -Iinclude -fPIC

# Исходные файлы
SRCS = src1/prog1.cpp src2/prog2.cpp include/funktion.cpp
OBJS = $(SRCS:.cpp=.o)

# Имя библиотеки
LIB = libfunktion.so

# Файлы исполняемых программ
EXE = prog1 prog2

# Правила сборки
all: $(LIB) $(EXE)

# Правило для сборки динамической библиотеки
$(LIB): include/funktion.o
	$(CXX) -shared -o $@ $^

# Правило для сборки исполняемых файлов
prog1: src1/prog1.o $(LIB)
	$(CXX) -o $@ $^ -L. -lfunktion -Wl,-rpath=.

prog2: src2/prog2.o $(LIB)
	$(CXX) -o $@ $^ -L. -lfunktion -Wl,-rpath=.

# Правило для компиляции .cpp в .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Очистка
clean:
	rm -f $(OBJS) $(EXE) $(LIB)

run:
	bash ./run.sh
