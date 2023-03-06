ABC.exe:big3.o main.o
	gcc -o ABC.exe big3.o main.o
big3.o:big3.c
	gcc -c big3.c
main.o:main.c
	gcc -c main.c
clean:
	rm -rf *.o ABC.exe
