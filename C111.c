#include<stdio.h>
#include<string.h>

char str[1145];
int num[1145],pos=1,flag=0;
int ans;

int main(void){
    gets(str);
    for(int i=0;i<strlen(str);i++){
        while(str[i]>='0' && str[i]<='9'){
            num[pos]=num[pos]*10+(str[i]-'0');
            flag=1;
            i++;
        }
        if((str[i]<'0' || str[i]>'9') && str[i-1]>='0' && str[i-1]<='9'){
            pos++;
        }
    }
    if(flag==0){
        printf("NO");
        return 0;
    }
    for(int i=1;i<=pos;i++){
        ans+=num[i];
    }
    for(int i=1;i<=pos-2;i++){
        printf("%d ",num[i]);
    }
    printf("%d\n",num[pos-1]);
    printf("%d",ans);
    return 0;
}