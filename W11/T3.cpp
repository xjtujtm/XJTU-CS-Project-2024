#include<stdio.h>
#include<math.h>

int tmp,flag=1;
int a[1919],i=1,ans;

void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}

int gcd(int a,int b){
	if(a<b){
		swap(&a,&b);
	}
	a=abs(a);
	b=abs(b);
	while(b){
		int t=a%b;
		a=b;
		b=t;
	}
	return a;
}

int main(void){
	while(flag==1){
		scanf("%d",&tmp);
		if(tmp==0){
			flag=0;
		}
		else{
			a[i]=tmp;
			i++;
		}
	}
	i--;
	ans=a[1];
	for(int j=2;j<=i;j++){
		ans=gcd(ans,a[j]);
	}
	printf("%d ",ans);
	for(int j=1;j<=i-1;j++){
		printf("%d ",a[j]);
	}
	printf("%d",a[i]);
	/*
	for(int j=1;j<=i;j++){
		printf("%d",a[j]);
	}
	*/
	
	return 0;
}

