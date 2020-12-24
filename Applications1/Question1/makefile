start:
	@echo	"commands are 1)build 2)run 3)clear 4)usage"
build:
	gcc	-shared	-o	Library.so	Library.c
	gcc	Client.c	-ldl	-o	Client
	
run:
	./Client	
clear:
	rm	Client
	rm	Library.so
usage:
	@echo	"1)make build \n  2)make clear"
