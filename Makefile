all: main

main: src/main.o src/spiral.o
	g++ -o main src/main.o src/spiral.o

src/main.o: src/main.cpp src/spiral.h
	g++ -c src/main.cpp -o src/main.o

src/spiral.o: src/spiral.cpp src/spiral.h
	g++ -c src/spiral.cpp -o src/spiral.o

clean:
	rm -f main src/*.o
