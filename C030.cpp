#include<stdio.h>
#include<string.h>

char str[114];
int k;

int main(void){
	scanf("%s%d",&str,&k);
	for(int i=0;i<strlen(str);i++){
		if('a'<=str[i] && str[i]<='z'){
			str[i]+=k;
			while(!('a'<=str[i] && str[i]<='z')){
				str[i]-=26;
			}
		}
		if('A'<=str[i] && str[i]<='Z'){
			str[i]+=k;
			while(!('A'<=str[i] && str[i]<='Z')){
				str[i]-=26;
			}
		}
	}
	puts(str);
	return 0;
}

