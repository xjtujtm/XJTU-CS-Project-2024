#include<stdio.h>

int n,k;
int arr[1145];
int res,pos=1;
int cnt;

int main(void){
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){
        arr[i]=1;
    }
    res=n;
    while(res>1){
        if(arr[pos]==1){
            cnt++;
        }
        if(cnt==k){
            arr[pos]=0;
            res--;
            cnt=0;
        }
        pos++;
        if(pos==n+1){
            pos=1;
        }
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==1){
            printf("%d",i);
            return 0;
        }
    }
    return 0;
}