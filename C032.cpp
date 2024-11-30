#include<stdio.h>
#include<math.h>

int n,m;
int flag=0;
int p=1,ans[114514];

int cnt=0,tmp,sp;
int check(int s){
	sp=s;
	cnt=0;
	for(int pos=1;pos<=3;pos++){
		tmp=sp%10;
		sp/=10;
		cnt+=pow(tmp,3);
	}
	if(cnt==s){
		return 1;
	}
	return 0;
}

int main(void){
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++){
		if(check(i)){
			flag=1;
			ans[p]=i;
			p++;
		}
	}
	if(flag==0){
		printf("-1");
		return 0;
	}
	for(int i=1;i<=p-2;i++){
		printf("%d ",ans[i]);
	}
	printf("%d",ans[p-1]);
	return 0;
}

