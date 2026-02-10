#include<stdio.h>

int main (){

// Count Digits in a Number
    int n, count=0;

    printf("Enter a nay number >10 :");
    scanf("%d", &n);

    while(n>0){
        n=n/10;
        count++;
    }
    printf("Total %d Digits : ", count);

getchar();
}
