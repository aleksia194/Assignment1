CXX = g++
CXXFLAGS = -Wall
TARGET = hello

all: $(TARGET)

$(TARGET): main.o hello.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o hello.o

main.o: main.cpp hello.h
	$(CXX) $(CXXFLAGS) -c main.cpp

greet.o: hello.cpp hello.h
	$(CXX) $(CXXFLAGS) -c hello.cpp

clean:
	rm -f *.o $(TARGET)

