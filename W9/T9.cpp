#include<stdio.h>

int n;
double sum,a=2.0,b=1.0,tmp;

int main(void){
	scanf("%d",&n);
	if(n==1){
		printf("2.0000");
		return 0;
	}
	else{
		for(int i=1;i<=n;i++){
			sum+=a/b;
			tmp=a;
			a+=b;
			b=tmp;
		}
	}
	printf("%.4lf",sum);
	return 0;
}

