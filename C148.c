#include<stdio.h>

char str[1145];
char is_lwr[1145],tmp;
int pos;

int main(void){
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='a' && str[i]<='z'){
            is_lwr[pos]=str[i];
            pos++;
        }
    }
    /*
    puts(is_lwr);
    printf("\n");
    */
    for(int i=0;i<=strlen(is_lwr)-2;i++){
        for(int j=0;j<=strlen(is_lwr)-2-i;j++){
            if(is_lwr[j]>is_lwr[j+1]){
                tmp=is_lwr[j+1];
                is_lwr[j+1]=is_lwr[j];
                is_lwr[j]=tmp;
            }
        }
    }
    puts(is_lwr);
    return 0;
}