#include<stdio.h>
#include<string.h>

char str[114];
int pos=0;

int main(void){
	gets(str);
	for(int i=strlen(str)-1;i>=1;i--){
		for(int j=i;j<strlen(str);j++){
			printf("%c",str[j]);
		}
		printf(" ");
	}
	printf("%s",str);
	return 0;
}

