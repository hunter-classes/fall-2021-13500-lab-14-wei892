main: main.o
	g++ -o main. main.o

main.o: main.cpp myvector.h myvector.cxx

clean:
	rm -f *.o *~
