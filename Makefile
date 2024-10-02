TARGET = app

all: $(TARGET)

$(TARGET): ./src/scripts/main.cpp
	g++ ./src/scripts/main.cpp -o ./src/scripts/$(TARGET)

run: $(TARGET)
	./src/scripts/$(TARGET)