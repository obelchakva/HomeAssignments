TARGET_BINARY = input.bin
PROGRAM = assignment2a
OUTPUT_BINARY = outfile.bin
CXX = g++
CXXFLAGS = -std=c++17 -Wall
SOURCES = assignment2a.cpp create_input.cpp
OBJECTS = $(SOURCES:.cpp=.o)
.PHONY: all clean run
all: $(TARGET_BINARY) $(PROGRAM)
$(TARGET_BINARY): create_input.cpp
	$(CXX) $(CXXFLAGS) create_input.cpp -o create_input
	./create_input
$(PROGRAM): assignment2a.cpp
	$(CXX) $(CXXFLAGS) assignment2a.cpp -o $(PROGRAM)
run: $(PROGRAM)
	./$(PROGRAM)
clean:
	rm -f $(OBJECTS) $(PROGRAM) create_input $(TARGET_BINARY) $(OUTPUT_BINARY)

