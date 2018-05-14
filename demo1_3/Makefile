all: program

program: main.o fun1.o fun2.o
	g++ main.o fun1.o fun2.o -o program

main.o: main.cpp
	g++ -c main.cpp -o main.o

fun1.o: fun1.cpp
	g++ -c fun1.cpp -o fun1.o

fun2.o: src/fun2.cpp
	g++ -c src/fun2.cpp -o fun2.o

clean:
	-rm -f *.o
