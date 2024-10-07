CXX=g++
CXXFLAGS=-Wall -Wextra -std=c++11
SOURCES=main.cpp greet.cpp
OBJECTS=$(SOURCES:.cpp=.o)
TARGET=hello_program

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) -o $@ $^

clean:
	rm -f $(OBJECTS) $(TARGET)
