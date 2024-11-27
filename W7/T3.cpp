#include<stdio.h>

int a,b;

int main(void){
	scanf("%d%d",&a,&b);
	if(a*a+b*b>=100){
		printf("%d",(a*a+b*b)/100);
	}
	else{
		printf("%d",a*a+b*b);
	}
	return 0;
}

//终于一遍过了 
