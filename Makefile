#CC = gcc
CFLAGS = -Wall -Wextra -pedantic -O2

.PHONY : all
all: count_dup sizeof chars


count_dup:
	gcc $(CFLAGS) -o $@ $@.c
	./$@
	rm $@


sizeof:
	gcc $(CFLAGS) -o $@ $@.c
	./$@
	rm $@

chars:
	gcc $(CFLAGS) -o $@ $@.c
	./$@
	rm $@

malloc_prime:
	gcc $(CFLAGS) -o $@ $@.c
	time echo 100000000 | ./$@
	rm $@

# for 100kk 
# count  5761455
# real   0m9,330s
# user   0m9,265s
# sys    0m0,053s
#
#
# now.. 
#real    0m1,693s
#user    0m1,606s
#sys     0m0,084s
#
