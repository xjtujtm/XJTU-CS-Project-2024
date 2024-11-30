#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int m,n,cnt,i,qry,tmp=1;
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
	
	if((int)pow(s,2) % (int)pow(10,cnt) == s){
		return 1;
	}
	else{
		return 0;
	}
}

int main(void){
	scanf("%d%d",&m,&n);
	for(int i=m;i<=n;i++){
		if(chk(i)){
			a[tmp]=i;
			tmp++;
			a[0]++;
		}
	}
	for(int i=1;i<=a[0]-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d",a[a[0]]);
	return 0;
}

