CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: main

clean:
	rm main test

main: main.cpp UtilityFunctions.cpp
	$(CXX) $(CXXFLAGS) main.cpp UtilityFunctions.cpp -o main

test: test.cpp UtilityFunctions.cpp
	$(CXX) $(CXXFLAGS) test.cpp UtilityFunctions.cpp -o test