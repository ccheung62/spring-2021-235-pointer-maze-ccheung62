OBJECTS=Main.o Labyrinth.o MazeGenerator.o
CXXFLAGS= -g
LDFLAGS=
CXX=g++

main: $(OBJECTS)
	$(CXX) -g  -o main $(OBJECTS)
Labyrinth.o: Labyrinth.cpp Labyrinth.h
	g++ -std=c++11 -c Labyrinth.cpp

Main.o: Main.cpp MazeGenerator.h Labyrinth.h

MazeGenerator.o: MazeGenerator.cpp MazeGenerator.h Labyrinth.h
	g++ -std=c++11 -c MazeGenerator.cpp


clean:
	rm -f $(OBJECTS)
