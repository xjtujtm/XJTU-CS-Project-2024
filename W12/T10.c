#include<stdio.h>
#include<math.h>

float d,v;
int t;

int main(void){
	scanf("%f%f",&d,&v);
	t=ceil(v/d);
	int a=2;
	for (int i=1;i<t;i=i+a)
	{
		t = t+1;
		a++;
	}
	printf("%d",t);
	return 0;
}