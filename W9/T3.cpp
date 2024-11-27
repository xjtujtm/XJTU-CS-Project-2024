	#include<stdio.h>
	#include<math.h>
	
	int a,n,sum=0,cnt;
	
	int main(void){
		scanf("%d%d",&a,&n);
		for(int i=1;i<=n;i++){
			cnt=0;
			for(int j=0;j<=i-1;j++){
				sum+=a*pow(10,j);
				cnt+=a*pow(10,j);
			}
			if(i!=n){
				printf("%d+",cnt);
			}
			else{
				printf("%d=%d",cnt,sum);
			}
		}
		return 0;
	}

