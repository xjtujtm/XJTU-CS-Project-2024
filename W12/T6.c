#include<stdio.h>
#include<string.h>

char str1[1145],str2[1145];
int pos,cnt,flag=1;

int main(void){
    scanf("%s %s",&str1,&str2);
    for(int i=0;i<=strlen(str1)-strlen(str2);i++){
        pos=0;
        flag=1;
        for(int j=i;j<i+strlen(str2);j++){
            if(pos<strlen(str2)){
                if(str2[pos]==str1[j]){
                    pos++;
                }
                else{
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}