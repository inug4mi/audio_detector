TARGET = app

all: $(TARGET)

$(TARGET): ./main.cpp
	g++ -Iheaders classes/audio_manager.cpp main.cpp -Iinclude -Llib -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-system -o ./$(TARGET)

run: $(TARGET)
	./$(TARGET)