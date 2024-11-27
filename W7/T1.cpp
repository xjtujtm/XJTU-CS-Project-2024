#include<stdio.h>

int a;

int main(void){
	scanf("%d",&a);
	printf("%d %d",(a-(a/1000000)*1000000-a%100)/100,((a-(a/1000000)*1000000-a%100)/100+1024));
	return 0;
}

//直接进行一手大一统式の写 
