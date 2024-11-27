#include<stdio.h>
#include<string.h>

int tot[1919],a,flag=1;

int main(void){
	while(flag/*scanf("%d",&a)!=EOF*/){
		scanf("%d",&a);
		if(a==-1){
			flag=0;
		}
		if(1<=a && a<=3){
			tot[a]++;
		}
		else{
			tot[4]++;
		}
	}
	tot[4]--;
	printf("%d %d %d %d",tot[1],tot[2],tot[3],tot[4]);
	return 0;
}

