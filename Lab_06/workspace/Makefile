#	Author: John Gibbons
#	Date: 2016.10.26


#Add needed Test.o
prog: main.o test.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o test.o -o prog

main.o: main.cpp test.h LinkedListOfInts.h
	g++ -g -Wall -std=c++11 -c main.cpp

test.o: test.cpp test.h LinkedListOfInts.h LinkedListOfInts.o
	g++ -g -Wall -std=c++11 -c test.cpp


#DON'T delete LinkedList.o!
clean:
	rm main.o *.*~ prog