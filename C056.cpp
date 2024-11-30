#include<stdio.h>

int y,m;
int d[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int ld[15]={0,31,29,31,30,31,30,31,31,30,31,30,31};

int LeapYear(int a){
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)){
		return 1;
	}
	else{
		return 0;
	}
}

int main(void){
	scanf("%d,%d",&y,&m);
	if(LeapYear(y)){
		printf("%d",ld[m]);
		return 0;
	}
	printf("%d",d[m]);
	return 0;
}

