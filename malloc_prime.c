/*
 * Sieve of Eratosthenes
 *
 * using char for each number instead of bit
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

	int max;
	printf("max prime: ");
	scanf("%d", &max);
	printf(" max choosen prime %d\n", max);

	// And there are approximately 203,118,205 prime numbers
	// less than or equal to 4,294,967,295
	//char* ptr;
	bool* ptr;
	ptr = (bool* )calloc(max, sizeof(bool));

	for (int i=2; i <= max; i++){
		if (ptr[i] == 1) { continue;}
		for (int f=2; f*i <= max; f++){
			//printf("fi = %d\n",f*i);
			ptr[f*i] = 1;
		}
	}

	//for (int i=2; i <= max; i++){
	//	if (!ptr[i])
	//		printf("number: %d prime \n", i);
	//}
	
	int count = 0;
	for (int i = 2; i <= max; i++){
		if (!ptr[i]) count += 1;
	}
	printf("count: %d\n", count);
}
