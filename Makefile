main: main.o
	g++ -o main main.o

test: test.o
	g++ -o test test.o

main.o: main.cpp myvector.h myvector.cxx
test.o: test.cpp myvector.h myvector.cxx

clean:
	rm -f *.o *~
