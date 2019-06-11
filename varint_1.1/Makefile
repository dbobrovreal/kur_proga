dynamic: src/main.c src/buble.c src/quick.c
	gcc -fPIC -c src/buble.c
	gcc -fPIC -c src/quick.c
	gcc -shared buble.o quick.o -o libmyfunc.so
	gcc -c src/main.c
	gcc main.o -L. -lmyfunc -o dynamic
clean:
	rm -f main.o buble.o quick.o