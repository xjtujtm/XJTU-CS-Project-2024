#include <stdio.h>
#include <string.h>

char str[100], a;

int main(void){
	gets(str);
    if(strlen(str)==1){
        puts(str);
        return 0;
    }
	for (int i = 0; i < strlen(str); i = i + 2) {
		for (int j = 0; j < strlen(str) - 2; j = j + 2) {
			if (str[j] > str[j + 2]) {
				a = str[j];
				str[j] = str[j + 2];
				str[j + 2] = a;
			}
		}
	}
	puts(str);
	return 0;
}