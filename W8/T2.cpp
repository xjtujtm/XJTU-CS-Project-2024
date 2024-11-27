#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int x;

int main(void) {
	for (int i = 1; i <= 3; i++) {
		scanf("%d", &x);
		for (int j = 1; j <= x; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
