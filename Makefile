CC=g++
CFLAGS=-Wall
SOURCE=src/prog1.cpp
OBJ=$(SRC_DIR)/prog1.o
SRC_DIR=src
INC_DIR=include
TARGET=app

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp $(INC_DIR)/funktion.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
