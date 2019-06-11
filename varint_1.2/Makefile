dynamic: src/main.c src/heap.c src/insertion.c
	gcc -fPIC -c src/heap.c
	gcc -fPIC -c src/insertion.c
	gcc -shared heap.o insertion.o -o libmyfunc.so
	gcc -c src/main.c
	gcc main.o -L. -lmyfunc -o dynamic
clean:
	rm -f main.o heap.o insertion.o