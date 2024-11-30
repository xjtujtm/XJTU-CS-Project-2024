#include<stdio.h>

int main() {
	int i = 1, a[100],x;
	for (; a[i-1] != 0; i++) scanf("%d", &a[i]);
	int s = s = 5 + a[1] * 6;
	for (int b = 2; b <= i - 2; b++) {
		x = (a[b] - a[b - 1] > 0) ? ((a[b] - a[b - 1]) * 6 + 5) : ((a[b - 1] - a[b]) * 4 + 5);
		s = s + x;
	}
	printf("%d", s);
	return 0;
}


