#include<stdio.h>

char str[114];
int n,m=0;

int main(void){
	scanf("%s %d",&str,&n);

	for (int i=strlen(str)-1;str[i]=='*';i--,m++);
	m=(m>n)?m-n:0;
	for (int i=0;i<=strlen(str)-m-1;i++) {
		printf("%c", str[i]);
	}
	return 0;
}

