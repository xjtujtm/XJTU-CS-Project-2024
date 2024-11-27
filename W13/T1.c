#include<stdio.h>
#include<string.h>

int n;

struct inf{
    char name[1145];
    char tel[1145];
}user[1145],temp;

int main(void){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s",user[i].name);
		scanf("%s",user[i].tel);
    }
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){ 
            if(strcmp(user[j].name,user[j+1].name)>0){
                temp=user[j];
				user[j]=user[j+1];
				user[j+1]=temp;
            }
        }
    }
    for(int i=1;i<=n;i++){
        printf("%s %s\n",user[i].name,user[i].tel);
    }
    return 0;
}

