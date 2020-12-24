start:
	@echo	"commands are 1)build 2)run 3)clear 4)usage"
build:
	gcc	-shared	-o	Runner.so	Runner.c
	gcc	-shared	-o	Perfectn.so	Perfectn.c
	gcc	Client.c	-ldl	-o	Client
	
run:
	./Client	
clear:
	rm	Q4
	rm	Perfectn.so
	rm	Runner.so
usage:
	@echo	"1)make build \n  2)make clear"
