CXX = g++
CXXFLAGS = -std=c++17 -Wall -I/usr/include/gtest -pthread
LDFLAGS = -lgtest -lgtest_main -pthread

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: test

test: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o test
