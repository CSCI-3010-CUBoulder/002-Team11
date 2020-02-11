CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: main

clean:
	rm main

test: main.cpp UtilityFunctions.cpp
	$(CXX) $(CXXFLAGS) test.cpp UtilityFunctions.cpp -o test

main: main.cpp UtilityFunctions.cpp
	$(CXX) $(CXXFLAGS) main.cpp UtilityFunctions.cpp -o main