#include<stdio.h>

int n;
int num[1145];

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
    if(n==1){
        scanf("%d",&num[1]);
        printf("%d",&num[1]);
        return 0;
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&num[i]);
    }
    my_sort();
    printf("%d ",num[1]);
    for(int i=1;i<=(n-3)/2;i++){
        printf("0 ");
    }
    printf("%d ",num[n]);
    for(int i=1;i<=(n-3)/2;i++){
        printf("0 ");
    }
    printf("%d",num[(n-1)/2+1]);
    return 0;
}