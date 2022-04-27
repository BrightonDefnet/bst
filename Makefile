all: bst

bst: main.o Tree.o
	g++ -g -o bst main.o Tree.o

main.o: main.cpp
	g++ -g -c main.cpp

Tree.o: Tree.cpp Tree.h
	g++ -g -c Tree.cpp
