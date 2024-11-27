#include<stdio.h>

int n,m;
int a[1919],cpy[1919];
int flag=1;

int main(void){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	while(m>n){
		m-=n;
	}
	for(int i=1;i<=n;i++){
		if(i+m>n){
			cpy[i]=a[i+m-n];
		}
		else{
			cpy[i]=a[i+m];
		}
	}
	
	for(int i=1;i<=n-1;i++){
		printf("%d ",cpy[i]);
	}
	printf("%d",cpy[n]);
	return 0;
}
/*
10 5
1 2 3 4 5 6 7 8 9 0
*/
