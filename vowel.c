#include<stdio.h>

int main(){

char a;

    printf("enter a Charecter a Chaeck Vowel and Not Vowel :");
    scanf("%c" , &a);

    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' ){
        printf(" %c This Number a Vowel :", a);
    }else{
        printf(" %c This Number a Not Vowel:" , a);
    }

}

