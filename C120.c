#include<stdio.h>
#include<string.h>

char str[1145];
int flag=1;
int start_pos,end_pos;

int main(void){
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]!=' '){
            start_pos=i;
            break;
        }
    }
    for(int i=strlen(str)-1;i>=0;i--){
        if(str[i]!=' '){
            end_pos=i;
            break;
        }
    }
    for(int i=0;i<strlen(str);i++){
        if(i<=start_pos){
            printf("%c",str[i]);
        }
        else if(i>=end_pos){
            printf("%c",str[i]);
        }
        else if(i>=start_pos && i<=end_pos && str[i]!=' '){
            printf("%c",str[i]);
        }
    }
    return 0;
}