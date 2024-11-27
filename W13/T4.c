#include<stdio.h>
#include<string.h>

char str[81];  
int a[81]={0};

int main(void){
    gets(str);
    int n=strlen(str);
    for(int i=65;i<65+26;i++)
        for(int j=0;j<n;j++)
            if (str[j]==i||str[j]==i+32) a[i-65]++;
       int N=1;
       for(int k=81;k>=0;k--)
              for (int m=0;m<26;m++)
                    if (a[m]==k){
                        printf("%c-%d",m+65,a[m]);
                        while (N<26){
                            printf(" ");
                            N++;
                            break;
                        }
                    }
    return 0;
}