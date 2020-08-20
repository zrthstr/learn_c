#include <stdio.h>
#define MAX_LIMIT 20

int mystrlen(char *str){
	int len = 0;
	for (; str[len] ;){
		printf("XX");
		len ++;
	}
	return len;
}

int mystrcp(char *a, char *b){
	//while (a[c] != '\0'){
	//	b[c] = a[c];
	//}
	return 10;
}

int mypprint(char *str){
	//int len = 0;
	//for (; len<=MAX_LIMIT ;++len){
	//	printf("str[%.2d] | 0x%02hhX @ %p\n",len,str[len],&str[len]);
	//	if ( str[len] == '\0' )
	//		{break;}
	//}
	return 0;
}

int main(){
	char str[MAX_LIMIT];
	char rts[MAX_LIMIT];
	printf("enter string:\n");
	fgets(str, MAX_LIMIT, stdin);
	printf("in:%s", str);


	//// reverse string from offset on
	//for (int i = 0;i<=len;i++){
	//	rts[i] = str[len-i-1];
	//}
	//rts[len]='\0';
	//
	int len = mystrlen(str);
	printf("len:::%d\n",len);
	//printf("str:%s\n",str);
	//printf("rts:%s\n",rts);

	return 0;
}
