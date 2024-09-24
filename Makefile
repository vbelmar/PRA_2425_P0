all: main

Robot.o: Robot.cpp Robot.h
	g++ -c Robot.cpp

main.o: main.cpp Robot.h
	g++ -c main.cpp

main: main.o Robot.o
	g++ -o main main.o

clean:
	rm -f *.o main

test: all
	./main
