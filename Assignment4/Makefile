CXX = g++
CXXFLAGS = -std=c++11 -Wall -Werror -Wpedantic -I.
LDFLAGS = -lgtest -lpthread
SRCS = main.cpp Transformer.cpp Autobot.cpp Decepticon.cpp Prime.cpp
OBJS = $(SRCS:.cpp=.o)
TEST_SRCS = tf_test.cpp Transformer.cpp Autobot.cpp Decepticon.cpp Prime.cpp
TEST_OBJS = $(TEST_SRCS:.cpp=.o)
EXEC = transformers
TEST_EXEC = tests

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

test: $(TEST_OBJS)
	$(CXX) $(CXXFLAGS) -o $(TEST_EXEC) $(TEST_OBJS) $(LDFLAGS)
	./$(TEST_EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TEST_OBJS) $(EXEC) $(TEST_EXEC)

.PHONY: all clean test
