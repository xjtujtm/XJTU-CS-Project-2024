#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int n,m;
int cnt;

int main(void){
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++){
		for(int j=n;j<=m;j++){
			for(int k=n;k<=m;k++){
				if(i*i+j*j==k*k){
					cnt++;
				}
			}
		}
	}
	printf("%d",cnt/2);
	return 0;
}

