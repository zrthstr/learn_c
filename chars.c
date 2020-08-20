
#include <stdio.h>

int main(){

	char a = 0;
	printf("a\t:%d\n",a);
	printf("a-1\t:%d\n",a-1);

	char b = 0;
	b = b-128;
	printf("b-128\t:%d\n",b);

	char c = -129;
	printf("c-129\t:%d\n",c);

	char d = "A";
	printf("\"A\"\t:%d | 0x%x\n", d, d);
	char e = 'A';
	printf("'A'\t:%d | 0x%x \n", e, e);


	return 0;
}
