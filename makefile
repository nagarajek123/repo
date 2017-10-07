ABC.exe:big3.o fact.o reverse.o main.o
	gcc -o ABC.exe big3.o fact.o reverse.c main.o
big3.o:big3.c
	gcc -c big3.c
fact.o:fact.c
	gcc -c fact.c
reverse.o:reverse.c
	gcc -c reverse.c
main.o:main.c
	gcc -c main.c
clean:
	Rm -rf *.0




