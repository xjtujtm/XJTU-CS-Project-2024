#include<stdio.h>

int y,n,cnt=0;
int ans;

int isLeapyear(int y){
	if((y%4==0 && y%100!=0) || y%400==0){
		return 1;
	}
	return 0;
}

int main(void){
	scanf("%d%d",&y,&n);
	for(int i=y;cnt<=n;i++){
		if(isLeapyear(i)){
			cnt++;
			if(cnt==n){
				ans=i;
			}
		}
	}
	printf("%d",ans);
	return 0;
}

