#include<stdio.h>
#include<math.h>

double a[4];

int tmp;
void swap(int a,int b){
	b=tmp;
	b=a;
	a=tmp;
}

int main(void){
	for(int i=1;i<=3;i++){
		scanf("%lf",&a[i]);
	}
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			if(a[j]<a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	if(a[1]+a[2]>a[3]){
		printf("YES");
	}
	else{
		printf("ERROR DATA");
	}
	return 0;
}

