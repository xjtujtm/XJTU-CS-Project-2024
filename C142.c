#include<stdio.h>
#include<math.h>

int n;
int a[1145],b[1145],rm[1145],rma[1145];
int gcd,min=1;
int sum_a;

int get_gcd(int a,int b){
    while(b>0){
        int r=b;
        b=a%b;
        a=r;
    }
    return a;
}

int main(void){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d/%d",&a[i],&b[i]);
    }
    gcd=b[1];
    for(int i=1;i<=n;i++){
        gcd=get_gcd(gcd,b[i]);
    }
    for(int i=1;i<=n;i++){
        rm[i]=b[i]/gcd;
    }
    for(int i=1;i<=n;i++){
        min*=rm[i];
    }
    min*=gcd;
    for(int i=1;i<=n;i++){
        rma[i]=a[i]*(min/b[i]);
        sum_a+=rma[i];
    }
    if(get_gcd(abs(sum_a),min)!=1){
        int gcdd=get_gcd(abs(sum_a),min);
        sum_a/=gcdd;
        min/=gcdd;
    }
    if(abs(sum_a)<min){
        printf("%d/%d",sum_a,min);
        return 0;
    }
    else if (abs(sum_a)%min==0){
        printf("%d",sum_a/min);
        return 0;
    }
    
    else{
        printf("%d ",sum_a/min);
        sum_a-=min*(sum_a/min);
        printf("%d/%d",abs(sum_a),min);
    }
    return 0;
}