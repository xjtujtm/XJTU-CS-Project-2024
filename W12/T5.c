#include<stdio.h>
#include<string.h>
#include<stdbool.h>

char str[1145],c;

bool isIn(char c){
    for(int i=0;i<strlen(str);i++){
        if(c==str[i]){
            return 1;
        }
    }
    return 0;
}

int main(void){
    gets(str);
    scanf("%c",&c);
    if(isIn(c)){
        for(int i=0;i<strlen(str);i++){
            if(str[i]!=c){
                printf("%c",str[i]);
            }
        }
    }
    else{
        printf("NotFound");
    }
    return 0;
}