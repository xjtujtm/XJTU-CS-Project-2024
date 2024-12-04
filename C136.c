#include<stdio.h>
#include<string.h>

int m;

struct information{
    char name[1145],in[1145],out[1145];
}user[1145];

char temp[1145];

int main(void){
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        scanf("%s %s %s",&user[i].name,&user[i].in,&user[i].out);
    }
    for(int i=1;i<=m-1;i++){
        for(int j=1;j<=m-i;j++){
            if(strcmp(user[j].in,user[j+1].in)>0){
                strcpy(temp,user[j+1].name);
                strcpy(user[j+1].name,user[j].name);
                strcpy(user[j].name,temp);

                strcpy(temp,user[j+1].in);
                strcpy(user[j+1].in,user[j].in);
                strcpy(user[j].in,temp);

                strcpy(temp,user[j+1].out);
                strcpy(user[j+1].out,user[j].out);
                strcpy(user[j].out,temp);
            }
        }
    }
    printf("%s ",user[1].name);
    for(int i=1;i<=m-1;i++){
        for(int j=1;j<=m-i;j++){
            if(strcmp(user[j].out,user[j+1].out)>0){
                strcpy(temp,user[j+1].name);
                strcpy(user[j+1].name,user[j].name);
                strcpy(user[j].name,temp);

                strcpy(temp,user[j+1].in);
                strcpy(user[j+1].in,user[j].in);
                strcpy(user[j].in,temp);

                strcpy(temp,user[j+1].out);
                strcpy(user[j+1].out,user[j].out);
                strcpy(user[j].out,temp);
            }
        }
    }
    printf("%s",user[m].name);
    return 0;
}