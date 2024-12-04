#include<stdio.h>
#include<string.h>

char str[1145];
int l_st,r_st,l_ed,r_ed;

int main(void){
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]!='*'){
            l_st=i;
            break;
        }
    }
    for(int i=l_st;i<strlen(str);i++){
        if(str[i]=='*'){
            l_ed=i-1;
            break;
        }
    }
    for(int i=strlen(str)-1;i>=0;i--){
        if(str[i]!='*'){
            r_st=i;
            break;
        }
    }
    for(int i=r_st;i>=0;i--){
        if(str[i]=='*'){
            r_ed=i+1;
            break;
        }
    }
    if(l_ed==r_st && r_ed==l_st){
        puts(str);
        return 0;
    }
    else{
        for(int i=0;i<=l_ed;i++){
            printf("%c",str[i]);
        }
        for(int i=r_ed;i<strlen(str);i++){
            printf("%c",str[i]);
        }
    }
    return 0;
}