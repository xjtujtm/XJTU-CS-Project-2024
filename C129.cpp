#include<stdio.h>
#include<string.h>

char str[114];
int tot[30];

int main(void){
	gets(str);
	for(int i=0;i<strlen(str);i++){
		if('a'<=str[i] && str[i]<='z'){
			tot[str[i]-96]++;
		}
		if('A'<=str[i] && str[i]<='Z'){
			tot[str[i]-64]++;
		}
	}
	for(int i=1;i<=25;i++){
		printf("%d,",tot[i]);	
	}
	printf("%d",tot[26]);
	return 0;
}

