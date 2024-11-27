#include<stdio.h> 

int n,a[201],pos,tmp=-114514;

int main(void){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&pos);
		if(pos>tmp){
			tmp=pos;
		}
		a[pos]++;
	}
	printf("%d,%d",tmp,a[tmp]);
	return 0;
}

