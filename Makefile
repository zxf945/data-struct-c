build-i:
	gcc -E hello.c -o hello.i
build-s:
	gcc -S hello.i -o hello.s
build-o:
	gcc -c hello.s -o hello.o
build:
	gcc	hello.c	main.c	-o	bin/main
run:
	./bin/main
clean:
	rm -f bin/main