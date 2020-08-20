#include <stdio.h>
#define MAX_LIMIT 20

int mystrlen(char *str){
	int len = 0;
	for (; str[len]; len++){}
	return len;
}

int mystrcp(char *src, char *dst){
	int c = 0;
	for(; src[c]; c++){dst[c]=src[c];}
	return c;
}

int mypprint(char *str){
	int c = 0;
	for (; str[c] ;c++){
		printf("str[%.2d] | 0x%02hhX @ %p\n",c,str[c],&str[c]);}
	return c;
}

int main(){
	char str[MAX_LIMIT];
	char rts[MAX_LIMIT];

	printf("enter string:\n");
	fgets(str, MAX_LIMIT, stdin);

	int len = mystrlen(str);
	printf("len:::%d\n",len);

	int cped = mystrcp(str,rts);
	printf("str:%s\n",str);
	printf("rts:%s\n",rts);

	mypprint(str);

	return 0;
}
