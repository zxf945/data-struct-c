default:
	./bin/main
build-i-E:
	gcc -E hello.c -o hello.i
build-s-S:
	gcc -S hello.c -o hello.s
build-o-c:
	gcc -c hello.s -o hello.o
build:
	gcc	hello.c	main.c	-o	bin/main
clean:
	rm -f bin/main