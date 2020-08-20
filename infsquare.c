#include <stdlib.h>
#include <stdio.h>
int main(){
	int cart = 2;
	int max = 0;
	printf("cart: %d\n",cart);
	for (;;cart=cart*cart+1){
		if (cart > max ){
			max = cart;
			printf("           !!!!!!!NEW!!!!!!!!!!!!");
		}
 printf("cart: %d   max: %d \n",cart, max);
	}
	return 0;
}
