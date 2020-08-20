#include <stdio.h>
#define MAX_LIMIT 20

int main(){
	char str[MAX_LIMIT];
	char rts[MAX_LIMIT];
	printf("enter string:\n");
	fgets(str, MAX_LIMIT, stdin);
	printf("in:%s", str);

	// get string leng
	int len = 0;
	for (; len<=MAX_LIMIT ;++len){
		printf("str[%.2d] | 0x%02hhX @ %p\n",len,str[len],&str[len]);
		if ( str[len] == '\0' ){
			break;
		}
	}
	printf("str: %s has len() %d\n", str, len);

	// reverse string from offset on
	for (int i = 0;i<=len;i++){
		rts[i] = str[len-i-1];
	}
	rts[len]='\0';
	printf("str:%s\n",str);
	printf("rts:%s\n",rts);

	return 0;
}
