#include<stdio.h>
#include<ctype.h>
#include<string.h>

char s[100],t[100],c[128]={0};

int main(void){
	scanf("%s %s",s,t);
	int len=strlen(s)+strlen(t);
	for (int i=0;i<len;i++){
		if(i<strlen(s)){
			c[toupper(s[i])]=1;
		}
		else{
			c[toupper(t[i-strlen(s)])]=1;
		}
	}
	for (int i=0;i<128;i++){
		if(c[i]==1){
            printf("%c", i);
        }
	}
	return 0;
}
/*
    #include<stdio.h>
    #include<string.h>
    #include<stdbool.h>

    char s[1145],t[1145];
    char arr[1145],pos;
    char *ans;

    bool isIn(char c,char qry[]){
        for(int i=0;i<strlen(qry);i++){
            if(qry[i]==c){
                return true;
            }
        }
        return false;
    }

    int main(void){
        scanf("%s",&s);
        scanf("%s",&t);
        strupr(s);
        strupr(t);
        for(int i=0;i<strlen(s);i++){
            if(!isIn(s[i],arr)){
                arr[pos]=s[i];
                pos++;
            }
        }
        for(int i=0;i<strlen(t);i++){
            if(!isIn(t[i],arr)){
                arr[pos]=t[i];
                pos++;
            }
        }
        for(int i=0;i<=pos-2;i++){
            for(int j=0;j<=pos-1-i;j++){
                if(arr[j]>arr[j+1]){
                    char temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for(int i=0;i<=pos;i++){
            if(arr[i]!=32){
                printf("%c",arr[i]);
            }
        }
        printf("\0");
        return 0;
    }
*/