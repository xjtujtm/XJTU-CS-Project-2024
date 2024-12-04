#include<stdio.h>
#include<math.h>

int n,d;
int arr[1145];
int siz,ans;

int find_max(int n){
    d=n*3;
    for(int i=1;d>0;i++){
        arr[i]=d%10;
        d/=10;
        siz=i;
    }
    for(int i=1;i<=siz-1;i++){
        for(int j=1;j<=siz-i;j++){
            if(arr[j]>arr[j+1]){
                int tmp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    for(int i=1;i<=siz;i++){
        ans+=arr[i]*pow(10,i-1);
    }
    return ans;
}

int main(void){
    scanf("%d",&n);
    printf("%d %d",n*3,find_max(n));
    return 0;
}