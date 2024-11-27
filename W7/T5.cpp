#include<stdio.h>
#include<math.h>

double a,b,c;

int main(void){
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("%g %d",(a+b+c),((a+b+c)-(int)(a+b+c))>0.5?((int)(a+b+c)+1):((int)(a+b+c)));
	//printf("%g %g",(a+b+c),round(a+b+c));
	return 0;
}

//VC的编译器毁了我的AC梦 
