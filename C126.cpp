#include<stdio.h>

int n;
int ans[200001];
int pos=1;

int my_isPalindrome(int s){
	int flag=(s%10==s/1000 && (s/10)%10==((s/100)%10)) ? 1:0;
	return flag;
}

int isPalindrome(int n) {
	int s=n,m=0,x;
	while(s!=0){
		
	}
	
}

int main(void){
	scanf("%d",&n);
	for(int i=1000;i<=n;i++){
		if(my_isPalindrome(i)){
			ans[pos]=i;
			pos++;
		}
	}
	for(int i=1;i<=pos-2;i++){
		printf("%d ",ans[i]);
	}
	printf("%d",ans[pos-1]);
	return 0;
}
