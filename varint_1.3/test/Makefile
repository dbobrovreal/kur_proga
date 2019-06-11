dynamic: main.c merge.c shell.c
	gcc -fPIC -c merge.c
	gcc -fPIC -c shell.c
	gcc -shared merge.o shell.o -o libmyfunc.so
	gcc -c main.c
	gcc main.o -L. -lmyfunc -o dynamic
clean:
	rm -f main.o merge.o shell.o