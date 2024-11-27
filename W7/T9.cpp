#include<stdio.h>

char c;

int main(void){
	scanf("%c",&c);
	if(c=='A'){
		printf("ZAB");
	}
	else if(c=='Z'){
		printf("YZA") ;
	}
	else{
		printf("%c%c%c",c-1,c,c+1);
	}
	return 0;
}

//猜猜我为什么不笑 
