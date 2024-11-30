#include<stdio.h>

int n;
int num[1145];
double sum;

void my_swap(int *a,int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
}

void my_sort(){
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            if(num[j]>num[j+1]){
                my_swap(&num[j],&num[j+1]);
            }
        }
    }
}

int main(void){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&num[i]);
    }
    my_sort();
    for(int i=1;i<=n;i++){
        sum+=num[i]/1.0;
    }
    printf("%d %d %.6lf",num[n],num[1],sum/n);
    return 0;
}