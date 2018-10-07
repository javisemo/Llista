all: LLISTABIOR

main.o: main.c llista.h
	gcc main.c -c -Wall -Wextra

llista.o: llista.c llista.h
	gcc llista.c -c -Wall -Wextra

LLISTABIOR: main.o llista.o
	gcc main.o llista.o -o llista.exe -Wall -Wextra

clean:
	rm *.o P3.exe
