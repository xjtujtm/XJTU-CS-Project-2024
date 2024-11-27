#include<stdio.h>
#include<string.h>

char str[1145];

int main(void){
    gets(str);
    for(int i=0;i<strlen(str)-1;i++){
        if(str[i]=='0'){
            printf("zero ");
        }
        if(str[i]=='1'){
            printf("one ");
        }
        if(str[i]=='2'){
            printf("two ");
        }
        if(str[i]=='3'){
            printf("three ");
        }
        if(str[i]=='4'){
            printf("four ");
        }
        if(str[i]=='5'){
            printf("five ");
        }
        if(str[i]=='6'){
            printf("six ");
        }
        if(str[i]=='7'){
            printf("seven ");
        }
        if(str[i]=='8'){
            printf("eight ");
        }
        if(str[i]=='9'){
            printf("nine ");
        }
    }
    if(str[strlen(str)-1]=='0'){
            printf("zero");
        }
        if(str[strlen(str)-1]=='1'){
            printf("one");
        }
        if(str[strlen(str)-1]=='2'){
            printf("two");
        }
        if(str[strlen(str)-1]=='3'){
            printf("three");
        }
        if(str[strlen(str)-1]=='4'){
            printf("four");
        }
        if(str[strlen(str)-1]=='5'){
            printf("five");
        }
        if(str[strlen(str)-1]=='6'){
            printf("six");
        }
        if(str[strlen(str)-1]=='7'){
            printf("seven");
        }
        if(str[strlen(str)-1]=='8'){
            printf("eight");
        }
        if(str[strlen(str)-1]=='9'){
            printf("nine");
        }
    return 0;
}