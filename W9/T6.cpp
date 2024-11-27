#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char arr[5][250];

void my_sort(){
	for(int i=1;i<=4;i++){
		for(int j=1;j<=5-i;j++){
			if(strcmp(arr[j],arr[j+1])>0){
				char tmp[250];
				strcpy(tmp,arr[j]);
				strcpy(arr[j],arr[j+1]);
				strcpy(arr[j+1],tmp);
			}
		}
	}
}

int main(void) {
	for (int i=1;i<=5;i++){
		scanf("%s", &arr[i]);
	}
	my_sort();
	printf("max:%s min:%s",arr[5],arr[1]);
	return 0;
}
