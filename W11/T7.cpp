#include<stdio.h>

int n;
int a[60];
int l=1,r=1;

/*
void qry(int pos){
	//printf("%d:\n",pos);
	int pos_r=pos+1;
	//printf("pos_r_init:%d\n",pos_r);
	while(a[pos_r]==a[pos]){
		pos_r++;
	}
	pos_r--;
	//printf("pos_r:%d\n",pos_r);
	//printf("%d\n",pos_r-pos+1);
	if((pos_r-pos+1)>(r-l+1)){
		l=pos;
		r=pos_r;
	}
}
*/

int main(void) {
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		scanf("%d",&a[i]);
	}
	for(int i=1; i<=n; i++) {
		int pos_r=i+1;
		while(a[pos_r]==a[i]) {
			pos_r++;
		}
		pos_r--;
		if((pos_r-i+1)>(r-l+1)) {
			l=i;
			r=pos_r;
		}
	}
	if(r-l+1<=1) {
		printf("NO");
		return 0;
	}
	printf("%d,%d",l-1,r-1);
	return 0;
}

