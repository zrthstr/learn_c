#include <stdlib.h>
#include <stdio.h>
int main(){
	int cart = 10;
	printf("cart: %d\n",cart);
	for (;;cart=cart+900){
		printf("cart: %d\n",cart);
	}
	return 0;
}
