CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: main

clean:
	rm main

main: main.cpp UtilityFunction.cpp
	$(CXX) $(CXXFLAGS) main.cpp UtilityFunction.cpp -o main