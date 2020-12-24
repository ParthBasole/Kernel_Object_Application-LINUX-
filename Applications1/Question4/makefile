start:
	@echo	"commands are 1)build 2)run 3)clear 4)usage"
build:
	gcc	-shared	-o	Min.so	Min.c
	gcc	-shared	-o	Max.so	Max.c
	gcc	Q4.c	-ldl	-o	Q4
	
run:
	./Q4	
clear:
	rm	Q4
	rm	Min.so
	rm	Max.so
usage:
	@echo	"1)make build \n  2)make clear"
