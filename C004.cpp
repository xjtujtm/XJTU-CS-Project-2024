#include<stdio.h>

int n;
int a,b,c,d;

int main(void){
	scanf("%d",&n);
	a=(n%10+5)%10;
	b=((n/10)%10+5)%10;
	c=((n/100)%10+5)%10;
	d=(n/1000+5)%10;
	printf("%d",d+c*10+b*100+a*1000);
	return 0;
}

