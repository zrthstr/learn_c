#CC = gcc
CFLAGS = -Wall -Wextra -pedantic -O2

.PHONY : all
all: count_dup sizeof


count_dup:
	gcc $(CFLAGS) -o $@ $@.c
	./$@
	rm $@


sizeof:
	gcc $(CFLAGS) -o $@ $@.c
	./$@
	rm $@

