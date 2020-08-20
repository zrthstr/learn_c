
/*
//
// https://www.w3resource.com/c-programming-exercises/array/index.php
//
// 5. Write a program in C to count a total number of duplicate elements in an array. Go to the editor
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 5
// element - 1 : 1
// element - 2 : 1
// Expected Output :
// Total number of duplicate elements found in the array is : 1
// Click me to see the solution
//
*/


#include <stdio.h>
#include <limits.h>
#include <ctype.h>

void debug(){
	printf("CHAR_MIN: %d\n", CHAR_MIN );  // -128
	printf("CHAR_MAX: %d\n", CHAR_MAX );  //  127
	printf("UCHAR_MAX: %d\n", UCHAR_MAX );  //  127
}

void show_score(char *stat){
	for (int c = CHAR_MIN;c <= CHAR_MAX; c++){
		int this = c+128;
		char cprint = '-';
		if (ispunct(c) || isalnum(c))
			cprint = c;
		if (stat[this])
			printf("char(%4d) | 0x%02x | %1c | count -> %2d\n", c, (char)c & 0xff, cprint ,stat[this]);
	}
}

void score(char *tbc, char *stat){
	for (int c = 0;tbc[c] != '\0'; c++)
		stat[tbc[c]+CHAR_MAX+1]+=1;
}

int main(){

	debug();

	char tbc[] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAthis is some array12334455";   // to be checked
	char stat[UCHAR_MAX] = {0};

	printf("tbc:  %s\n",  tbc);
	printf("stat: %s\n", stat);

	score(tbc, stat);
	show_score(stat);

	return 0;
}
