all: dc

dc: dc.l dc.y
	flex -o dc.c dc.l
	bison -d dc.y
	gcc -Wall -o $@ dc.c dc.tab.c -ly

clean:
	@rm  -f *.o *.h *.c dc a.out
