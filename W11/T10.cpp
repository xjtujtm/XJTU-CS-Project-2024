#include<iostream>
#include<math.h>

int x,y;
int tmp_a,tmp_b,a,b;

int get_swap(int s){
	int tmp=abs(s);
	int cnt=0;
	while(tmp>0){
		tmp/=10;
		cnt++;
	}
	int swap_ans=0;
	tmp=abs(s);
	for(int i=1;i<=cnt;i++){
		swap_ans+=(tmp%10)*pow(10,cnt-i);
		tmp/=10;
	}
	if(s<=0){
		swap_ans*=-1;
	}
	return swap_ans;
}

int main(void){
	scanf("%d%d",&x,&y);
	tmp_a=(x+y)/2;
	tmp_b=(x-y)/2;
	a=get_swap(tmp_a);
	b=get_swap(tmp_b);
	printf("%d %d",a+b,a-b);
	return 0;
}

