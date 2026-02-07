#include<stdio.h>

int main(){

char a;

    printf("enter a Charecter a Chaeck Valid Charecter :");
    scanf("%c" , &a);

    if( (a>='a' && a<='z') || (a>='A' && a<='Z') || (a>='0' && a<='9') ){
        printf(" %c This Charecter Are Valid :", a);
    }else{
        printf(" %c This Charecter Are Not Valid :" , a);
    }

}
