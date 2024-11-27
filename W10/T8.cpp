#include<stdio.h>
#include<string.h>

char str[114];
char find;

int main(void){
	gets(str);
	find=str[strlen(str)-1];
	for(int i=0;i<strlen(str)-3;i++){
		if(str[i]==find){
			printf("%d",i);
			return 0;
		}
	}
	printf("-1");
	return 0;
}

