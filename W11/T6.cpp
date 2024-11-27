#include<stdio.h>
#include<stdbool.h>
int n,m;
int a[1919],b[1919];
int tmp[1919];
int pos=1;

bool isIn_tmp(int a,int size){
	for(int i=1;i<=size-1;i++){
		if(a==tmp[i]) return 1;
	}
	return 0;
}

bool isIn_b(int a,int size){
	for(int i=1;i<=size;i++){
		if(a==b[i]) return 1;
	}
	return 0;
}

int main(void){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d",&b[i]);
	}
	for(int i=1;i<=n;i++){
		if(isIn_b(a[i],m) && !isIn_tmp(a[i],pos)){
			tmp[pos]=a[i];
			pos++;
		}
	}
	for(int i=1;i<=pos-2;i++){
		printf("%d ",tmp[i]);
	}
	printf("%d",tmp[pos-1]);
	return 0;
}

