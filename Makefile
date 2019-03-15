all: ip_test

ip_test: main.o ip_test.o
	g++ -o ip_test main.o ip_test.o

main.o: main.c ip_test.h
	g++ -c -o main.o main.c

ip_test.o: ip_test.c ip_test.h
	g++ -c -o ip_test.o ip_test.c

clean:
	rm -f *.o ip_test 

