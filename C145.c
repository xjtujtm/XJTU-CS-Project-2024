#include <stdio.h>
#include <string.h>

char input[100][20];
int i = 0, l = 0, b = 0,count = 1, nums[100] = { 0 };

int main(void){
	do scanf("%s", input[i++]);
	while (strcmp(input[i - 1], "###") != 0);

	for (int j = 0; j < i; j++) {
		for (int k = j + 1; k < i; k++) {
			if (!strcmp(input[j], input[k])) {
				strcpy(input[k], "###");
				count++;
			}
		}
		if (strcmp(input[j], "###") && b == 0) {
			printf("%s-%d", input[j], count);
			b++;
		}
		else if (strcmp(input[j], "###"))
			printf(" %s-%d", input[j], count);
		count = 1;
	}

	return 0;
}