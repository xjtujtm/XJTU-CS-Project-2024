#include<stdio.h>
#include<string.h>

char str[1145];
int rem;

int main(void){
    gets(str);
    rem=strlen(str)%3;
    for(int i=0;i<rem;i++){
        printf("%c",str[i]);
    }
    if(rem!=0 && strlen(str)>3){
        printf(",");
    }
    for(int i=rem;i<strlen(str);i++){
        printf("%c",str[i]);
        if(rem-1<=0){
            rem+=3;
        }
        if(i%3==rem-1 && i!=strlen(str)-1){
            printf(",");
        }
    }
    return 0;
}