CXX = g++
CXXFLAGS = -std=c++11 -Wall -Werror -Wpedantic
SRC = main.cpp Transformer.cpp Autobot.cpp Decepticon.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = transformers

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

clean:
	rm -f $(OBJ) $(EXEC)

.PHONY: all clean
