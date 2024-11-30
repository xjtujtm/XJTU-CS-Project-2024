#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int n,pos,sum;

int flag,cnt,i;
int get_pos(int s){
	flag=1;
	cnt=1;
	i=1;
	while(flag){
		if(s/(int)pow(10,i)!=0){
			cnt++;
			i++;
		}
		else{
			return cnt;
		}
	}
	return cnt;
}

int main(void){
	scanf("%d",&n);
	pos=get_pos(n);
	for(int i=1;i<=pos;i++){
		sum+=(int)pow(n%10,2);
		n/=10;
	}
	printf("%d",sum);
	return 0;
}

