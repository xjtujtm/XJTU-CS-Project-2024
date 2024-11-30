#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>

int m,n,ans;

bool isPrime(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    if(n==3) return 1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(void){
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n-2;i++){
        if(isPrime(i) && isPrime(i+2)){
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}