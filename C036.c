#include<stdio.h>

int a,k;
int tmp,cnt;
char arr[1145];

int main(void){
    scanf("%d%d",&a,&k);
    if(a==0){
        printf("0");
        return 0;
    }
    while(a/k!=0 || a%k<=k && a%k>0){
        tmp=a%k;
        if(tmp<10){
            arr[cnt]=tmp+'0';
            a=a/k;
            cnt++;
        }  
        else{
            arr[cnt]=tmp-10+'A';
            a=a/k;
			cnt++;
        }
    }
    for(int i=cnt-1;i>=0;i--){
        printf("%c",arr[i]);
    }
    return 0;
}