#include <stdio.h>
#include <math.h>
#include <string.h>
char str[33], a[33];
int k = 0, j = 31, nums[32], ans[4] = { 0 }, count = 0;

int main(void){
	

	scanf("%s", str);
	
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] != '0' && str[i] != '1'){
            printf("该字符串不是正确的IP地址");
            return 0;
        }   
	}
	for (int i = strlen(str) - 1; i >= 0; i--)
		a[j--] = str[i];
	for (; j >= 0; j--) a[j] = '0';
	for (int i = 0; i < 32; i++)
		nums[i] = a[i] - '0';
	for (int i = 0; i < 32; i++) {
		if (i != 0 && i % 8 == 0) k++;
		ans[k] = ans[k] + nums[i] * pow(2, 7 - i % 8);
	}
	printf("%d", ans[0]);
	for (int i = 1; i < 4; i++)
		printf(".%d", ans[i]);
	return 0;
}