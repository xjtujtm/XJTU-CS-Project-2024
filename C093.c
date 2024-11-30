#include<stdio.h>

char str[1145];

int main(void){
    gets(str);
    if(strlen(str)%2==0){
        for(int i=0;i<strlen(str);i++){
            if(i%2==1){
                printf("%c",str[strlen(str)-i]);
            }
            else{
                printf("%c",str[i]);
            }
        }
    }
    else{
        for(int i=0;i<strlen(str);i++){
            if(i%2==1){
                printf("%c",str[strlen(str)-1-i]);
            }
            else{
                printf("%c",str[i]);
            }
        }
    }
    
    return 0;
}