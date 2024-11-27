#include<stdio.h>

int a=114514,flag=1;
int cnt[4];

int main(void){
	while(a!=-1){
		scanf("%d",&a);
		if(a!=-1){
			cnt[a]++;
		} 
		else{
			flag=0;
			break;
		}
	}
	for(int i=0;i<=3;i++){
		printf("%d ",cnt[i]);
	}
	printf("%d",cnt[4]);
	return 0;
}

