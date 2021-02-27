/*
 * Sieve of Eratosthenes
 *
 * using char for each number instead of bit
 */


#include <stdio.h>
#include <stdlib.h>

int main(){

	int max;
	printf("max prime: ");
	scanf("%d", &max);
	printf(" max choosen prime %d\n", max);

	// And there are approximately 203,118,205 prime numbers
	// less than or equal to 4,294,967,295
	char* ptr;
	ptr = (char* )calloc(max, sizeof(char));

	for (int i=2; i <= max; i++){
	// so much room for optimisation
	//printf("i = %d\n",i);

		for (int f=2; f*i <= max; f++){
			//printf("fi = %d\n",f*i);
			ptr[f*i] = 1;
		}
		
	}

	// show
	//ptr[6] = 1;
	for (int i=2; i <= max; i++){
		if (!ptr[i])
			printf("number: %d prime \n", i);
	}
}
