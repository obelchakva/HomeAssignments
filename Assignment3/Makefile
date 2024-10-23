CXX = g++
CXXFLAGS = -Wall -g
TARGET = transformers
OBJS = Transformer.o Autobot.o Decepticon.o Prime.o main.o
all: $(TARGET)
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^
%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c $<
clean:
	rm -f $(OBJS) $(TARGET)
run: $(TARGET)
	./$(TARGET)

