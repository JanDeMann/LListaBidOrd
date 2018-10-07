all: llistaBidOrd

llistaBidOrd: main.o llistaBid.o
	gcc main.o llistaBid.o -o llistaBidOrd

llistaBid.o: llistaBidireccional.c llistaBidireccional.h
	gcc -c llistaBidireccional.c

main.o: main.c
	gcc -c main.c

clean:
	rm *.o
