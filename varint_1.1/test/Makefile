dynamic: main.c buble.c quick.c
	gcc -fPIC -c buble.c
	gcc -fPIC -c quick.c
	gcc -shared buble.o quick.o -o libmyfunc.so
	gcc -c main.c
	gcc main.o -L. -lmyfunc -o dynamic
clean:
	rm -f main.o buble.o quick.o