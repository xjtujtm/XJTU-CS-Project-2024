#include<stdio.h>
#include<string.h>

char arr[300],c;
int cnt=0,length=0;

int main(void){
	scanf("%s",&arr);
	for(int i=0;i<strlen(arr);i++){
		if(arr[i]=='*'){
			cnt++;
		}
		else{
			break;
		}
	}
	for(int i=cnt;i<strlen(arr);i++){
		printf("%c",arr[i]);
	}
	for(int i=1;i<=cnt;i++){
		printf("*");
	}
	return 0;
}

