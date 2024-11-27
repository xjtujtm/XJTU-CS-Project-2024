#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int n,m;
int cnt,i,qry;
int a[114514];

int get_pos(int s){
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

int pos,tmp;

int in(int s){
	pos=get_pos(s);
	for(int i=1;i<=pos;i++){
		tmp=s/(pow(10,i-1));
		if(tmp%10==7){
			return 1;
		}	
	}
	return 0;
}

void chk(int n,int m){
	for(int i=n;i<=m;i++){
		if(i%7==0){
			printf("%d is a multiple of 7\n",i);
		}
		if(in(i)){
			printf("%d contains 7\n",i);
		}
	}
}

int main(void){
	scanf("%d%d",&n,&m);
	chk(n,m);
	return 0;
}

