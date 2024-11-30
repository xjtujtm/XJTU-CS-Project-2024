#include<stdio.h>
#include<string.h>

int n;
char str_ans[1145];

/*
char *str_trans(int n){
	char *str_ans;
	int tmp=n,cnt=0;
	while(tmp>0){
		tmp/=10;
		cnt++;
	}
	int get_pos=0;
	tmp=n;
	for(int i=1;i<=cnt;i++){
		get_pos=tmp%10;
		tmp/=10;
		str_ans[i-1]=(char)get_pos;
	}
	return str_ans;
}
*/

int main(void){
	scanf("%d",&n);
	printf("%d ",(int)n/2);
	int tmp=n/2,cnt=0;
	while(tmp>0){
		tmp/=10;
		cnt++;
	}
	int get_pos=0;
	tmp=n/2;
	for(int i=1;i<=cnt;i++){
		get_pos=tmp%10;
		tmp/=10;
		str_ans[cnt-i]=(char)(get_pos+(int)'a');	
	}
	printf("%s",str_ans);
	return 0;
}

