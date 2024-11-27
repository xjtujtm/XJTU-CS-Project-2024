#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int n;
double sum;

int main(void){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==1){
			sum+=(1.0/(2*i-1));
		}
		else{
			sum+=(-1.0)*(1.0/(2*i-1));
		}
		
	}
	printf("%.4lf",sum);
	return 0;
}

