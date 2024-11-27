#include<stdio.h>

int n;

struct info{
    char id[1145];
    char name[1145];
    int a,b,c,sum;
}stu[1145],temp;

int main(void){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s %s %d %d %d",&stu[i].id,&stu[i].name,&stu[i].a,&stu[i].b,&stu[i].c);
        stu[i].sum=stu[i].a+stu[i].b+stu[i].c;
    }
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            if(stu[j].sum>stu[j+1].sum){
                temp=stu[j+1];
                stu[j+1]=stu[j];
                stu[j]=temp;
            }
        }
    }
    for(int i=1;i<=n;i++){
        printf("%s %s %d %d %d %d\n",stu[i].id,stu[i].name,stu[i].a,stu[i].b,stu[i].c,stu[i].sum);
    }
    return 0;
}