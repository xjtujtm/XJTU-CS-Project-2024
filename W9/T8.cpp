#include<stdio.h>
#include<math.h>

int n,flag;

int isPrime(int n) {
	if(n==1) {
		return 0;
	}
	if(n==2) {
		return 1;
	}
	if(n%2==0) {
		return 0;
	}
	for(int i=3; i<=sqrt(n); i++) {
		if(n%i==0) {
			return 0;
		}
	}
	return 1;
}

int main(void) {
	scanf("%d",&n);
	printf("1*");
	if(isPrime(n)) {
		printf("%d",n);
	} 
	else {
		for(int i=2; i<=sqrt(n); i++) {
			flag=1;
			if(isPrime(n)) {
				printf("%d",n);
				break;
			}
			if(isPrime(i)) {
				while(n%i==0 && flag==1) {
					if(isPrime(n)) {
						printf("%d",n);
						flag=0;
					}
					printf("%d*",i);
					n/=i;
					if(isPrime(n)) {
						printf("%d",n);
						flag=0;
					}
				}
			}
		}
	}
	return 0;
}

