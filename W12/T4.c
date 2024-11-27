#include<stdio.h>
#include<string.h>

char str[1145];
char tmp[1145];
int pos=1,len=1;

int isIn(char c){
    for(int i=1;i<=len;i++){
        if(tmp[i]==c){
            return 0;
        }
    }
    return 1;
}

int main(void){
    gets(str);
    tmp[1]=str[0];
    pos++;
    for(int i=0;i<strlen(str);i++){
        if(isIn(str[i])){
            tmp[pos]=str[i];
            pos++;
            len++;
        }
    }
    for(int i=1;i<=len;i++){
        printf("%c",tmp[i]);
    }
    return 0;
}