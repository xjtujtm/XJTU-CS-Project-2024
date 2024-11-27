#include<stdio.h>
#include<string.h>

char str[1145],tmp;

int main(void){
	gets(str);
	for(int i=1;i<=strlen(str)-2;i++){
		for(int j=1;j<=strlen(str)-2-i;j++){
			if(str[j]<str[j+1]){
				tmp=str[j];
				str[j]=str[j+1];
				str[j+1]=tmp;
			}	
		}
	}
	printf("%s",str);
	return 0;
}
