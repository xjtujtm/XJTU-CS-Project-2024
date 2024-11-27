#include<stdio.h>

double a,b,c;

int main(void){
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("%g",(a+b+c)/3);
	return 0;
}

//我可能不懂为什么会爆零，但我知道OJ是什么脾气 
