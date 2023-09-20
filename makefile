all: BrazoRoboticoApp

clean:
	rm	-f	*.o	BrazoRoboticoApp

test: all
	./BrazoRoboticoApp

BrazoRobotico.o: BrazoRobotico.h BrazoRobotico.cpp
	g++	-c	BrazoRobotico.cpp

Main.o: BrazoRobotico.h Main.cpp
	g++	-c	Main.cpp

BrazoRoboticoApp: BrazoRobotico.o Main.o
	g++	-o	BrazoRoboticoApp	BrazoRobotico.o	Main.o
