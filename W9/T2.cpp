#include<stdio.h>

int a,cnt; 

int main(void){
	scanf("%d",&a);
	for(int i=1;i<=a/2;i++){
		cnt=a;
		cnt-=i;
		for(int j=i+1;j<=a/2+1;j++){
			cnt-=j;
			if(cnt==j+1){
				printf("%d=",a);
				for(int p=i;p<=j;p++){
					printf("%d+",p);
				}
				printf("%d\n",cnt);
				break;
			}
			else if(cnt==0){
				printf("%d=%d+%d",a,i,j);
			}
			else if(cnt<j+1){
				break;
			}
			else{
				continue;
			}
		}
	}
	return 0;
}

