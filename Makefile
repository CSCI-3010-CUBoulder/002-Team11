CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: main

clean:
	rm main

main: main.cpp UtilityFunctions.cpp
	$(CXX) $(CXXFLAGS) main.cpp UtilityFunctions.cpp -o main