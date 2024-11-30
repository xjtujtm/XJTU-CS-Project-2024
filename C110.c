#include<stdio.h>
#include<string.h>

int pos;
char str[1145],ans[1145];

int main(void){
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='a' && str[i]<='z'){
            ans[pos]=str[i];
            pos++;
        }
    }
    printf("%s",ans);
    return 0;
}