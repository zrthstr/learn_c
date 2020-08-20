

#include <stdio.h>

int main(){

	printf("testing sizeof\n");

	printf("> unsigned char\t\t%ld\n",sizeof(unsigned char));
	printf("> char\t\t\t%ld\n",sizeof(char));

	printf("> int\t\t\t%ld\n",sizeof(int));
	printf("> unsigned int\t\t%ld\n",sizeof(unsigned int));

	printf("> void*\t\t\t%ld\n",sizeof(void*));
	//printf("> bool\t%ld\n",sizeof(bool)); // nope!

	printf("> float\t\t\t%ld\n",sizeof(float));

	printf("> double\t\t%ld\n",sizeof(double));
	printf("> size_t\t\t%ld\n",sizeof(size_t));

	printf("testing sizeof on arrays\n");
	char foo[10] = {};
	char bar[] = "foooobar";
	printf("> char foo[10]\t\t%ld\n",sizeof(foo));
	printf("> char bar[\"foooobar\"]\t%ld\n",sizeof(bar));

	return 0;
}
