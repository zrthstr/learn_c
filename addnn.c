#include <stdio.h>

// read two int a,b
// print sum, a+b

int main(){
	int sum, a , b;
	printf("enter a:");
	scanf("%d", &a);
	printf("enter b:");
	scanf("%d", &b);
	sum = a + b;
	printf("Sum: %d\n", sum);

	// print memory location
	printf("Address of a: %p\n", &a);
	printf("Address of b: %p\n", &b);
	printf("Address of sum: %p\n", &sum);


	// use pointer to change var
	int *ptr = &a;
	++*ptr;
	printf("Address of a: %d\n", a);


	return 0;
}
