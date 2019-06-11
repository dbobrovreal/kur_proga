dynamic: main.c heap.c insertion.c
	gcc -fPIC -c heap.c
	gcc -fPIC -c insertion.c
	gcc -shared heap.o insertion.o -o libmyfunc.so
	gcc -c main.c
	gcc main.o -L. -lmyfunc -o dynamic
clean:
	rm -f main.o heap.o insertion.o