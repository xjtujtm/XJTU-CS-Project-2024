#include<stdio.h>
#include<stdbool.h>

int n1,n2;
int a1[1145],a2[1145];
int ans[1145],pos=1;

bool isIn(int n,int qry[],int siz){
    for(int p=1;p<=siz;p++){
        if(qry[p]==n){
            return true;
        }
    }
    return false;
}

void my_swap(int *a,int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
}

void my_sort(int siz,int qry[]){
    for(int i=1;i<=siz-1;i++){
        for(int j=1;j<=siz-i;j++){
            if(qry[j]>qry[j+1]){
                my_swap(&qry[j],&qry[j+1]);
            }
        }
    }
}

int main(void){
    scanf("%d ",&n1);
    for(int i=1;i<=n1;i++){
        scanf("%d",&a1[i]);
    }
    scanf("%d ",&n2);
    for(int i=1;i<=n2;i++){
        scanf("%d",&a2[i]);
    }
    for(int i=1;i<=n1;i++){
        if(!isIn(a1[i],a2,n2)){
            ans[pos]=a1[i];
            pos++;
        }
    }
    for(int i=1;i<=n2;i++){
        if(!isIn(a2[i],a1,n1)){
            ans[pos]=a2[i];
            pos++;
        }
    }
    /*
    for(int i=1;i<=pos-1;i++){
        printf("%d ",ans[i]);
    }
    */
    my_sort(pos-1,ans);
    for(int i=1;i<=pos-2;i++){
        printf("%d ",ans[i]);
    }
    printf("%d",ans[pos-1]);
    return 0;
}