#include<stdio.h>

double s,h;
int cnt,n;

int main(void) {
	scanf("%d",&n);
	s=100.0;
	h=s/2;
	for(int i=2;i<=n;i++) {
		s=s+2.0*h;
		h/=2.0;
	}
	printf("%lf\n%lf",s,h);
	return 0;
}

