#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int n,cnt,i,qry,pos,tmp=0;
int a[114514];

int chk(int s){
	cnt=1;
	qry=1;
	i=1;
	while(qry){
		if(s/(int)pow(10,i) != 0){
			cnt++;
			i++;
		}
		else{
			qry=0;
		}
	}
	return cnt;
}

int main(void){
	scanf("%d",&n);
	pos=chk(n);
	for(int i=1;i<=pos;i++){
		tmp+=(n/(int)pow(10,(i-1)))%10;
	}
	if(tmp%2==1){
		printf("1");
	}
	else{
		printf("0");
	}
	return 0;
}

