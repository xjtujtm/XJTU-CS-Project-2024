#include<stdio.h>

int sec;

int main(void){
	scanf("%d",&sec);
	printf("%d:%.2d:%.2d\n",sec/3600,(sec-(sec/3600)*3600)/60,sec-((sec/3600)*3600)-(((sec-((sec/3600)*3600))/60)*60));
	return 0;
}

//必须用大一统式给自己上难度 
