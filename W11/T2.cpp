#include<stdio.h>

int m,n;

int ack(int m,int n){
	if(m==0) return n+1;
	if(n==0) return ack(m-1,1);
	return ack(m-1,ack(m,n-1));
}

int main(void){
	scanf("%d%d",&m,&n);
	printf("ack(%d,%d)=%d",m,n,ack(m,n));
	return 0;
}

