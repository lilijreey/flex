
all: enum_pp 

enum_pp: struct.c enum_pp.l enum_pp.y
	bison -d enum_pp.y
	flex -o enum_pp.c enum_pp.l
	gcc -g -O1 -o $@ enum_pp.c enum_pp.tab.c struct.c 


clean:
	@rm -f *.o enum_pp.tab.c enum_pp.tab.h enum_pp enum_pp.c


