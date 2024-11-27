#include<stdio.h>
#include<math.h>

int x=114514;

int main(void){
	while(x>1000 || x<=0){
		scanf("%d",&x);
		if(x>1000 || x<=0){
			//printf("AMDYES\n");
			printf("0\n");
		}
		else{
			printf("%d",(int)sqrt((double)x));
			break;
		}
	}
	return 0;
}
