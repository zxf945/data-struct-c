main: main.c
	gcc main.c -o bin/main

run: bin/main
	./bin/main