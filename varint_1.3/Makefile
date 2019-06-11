dynamic: src/main.c src/merge.c src/shell.c
	gcc -fPIC -c src/merge.c
	gcc -fPIC -c src/shell.c
	gcc -shared merge.o shell.o -o libmyfunc.so
	gcc -c src/main.c
	gcc main.o -L. -lmyfunc -o dynamic
clean:
	rm -f main.o merge.o shell.o