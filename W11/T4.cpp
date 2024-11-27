#include<stdio.h>

int n;
double x;

double poly(int n,double x){
	if(n==0) return 1;
	if(n==1) return x;
	return ((2*n-1)*x*poly(n-1,x)-(n-1)*poly(n-2,x))/n;
}

int main(void){
	scanf("%d%lf",&n,&x);
	printf("%lf\n",poly(n,x));
	return 0;
}

