CXX = g++
CXXFLAGS = -std=c++17 -Wall -I.
LDFLAGS = -lgtest -lpthread
EXEC = transformers
TEST_EXEC = tests
SRC = main.cpp Transformer.cpp Autobot.cpp Decepticon.cpp Prime.cpp Alliance.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)
TEST_SRC = tf_test.cpp Transformer.cpp Autobot.cpp Decepticon.cpp Prime.cpp Alliance.cpp Weapon.cpp
TEST_OBJ = $(TEST_SRC:.cpp=.o)
.PHONY: all clean test
all: $(EXEC)
$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC)
test: $(TEST_EXEC)
	./$(TEST_EXEC)
$(TEST_EXEC): $(TEST_OBJ)
	$(CXX) $(TEST_OBJ) -o $(TEST_EXEC) $(LDFLAGS)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ) $(EXEC) $(TEST_OBJ) $(TEST_EXEC)
