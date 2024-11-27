#include<stdio.h>
#include<string.h>

char str[1145];
int start_pos,end_pos;

int main(void){
    gets(str);
    start_pos=0;
    end_pos=strlen(str)-1;
    for(int i=0;i<strlen(str);i++){
        if(str[i]!='*'){
            start_pos=i;
            break;
        }
        start_pos++;
    }
    for(int i=strlen(str)-1;i>=0;i--){
        if(str[i]!='*'){
            end_pos=i;
            break;
        }
        end_pos--;
    }
    //printf("%d %d",start_pos,end_pos);
    for(int i=start_pos;i<=end_pos;i++){
        printf("%c",str[i]);
    }
    return 0;
}