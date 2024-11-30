#include<stdio.h>

char c[5];

int main(void){
	gets(c);
	printf("%c %d %c\n%c %d %c\n%c %d %c\n%c %d %c\n",c[0],(int)c[0],c[0]+1,c[1],(int)c[1],c[1]+1,c[2],(int)c[2],c[2]+1,c[3],(int)c[3],c[3]+1);
	return 0;
}

//写完了 
//现在是2024/10/15 0:34:21 
