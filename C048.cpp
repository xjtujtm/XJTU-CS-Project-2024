#include<stdio.h>
#include<math.h>

double m,y,r;

int main(void){
	scanf("%lf,%lf,%lf",&m,&y,&r);
	printf("%.2lf",m*(pow((1+r),y)));
	return 0;
}

//บรอๆ 
