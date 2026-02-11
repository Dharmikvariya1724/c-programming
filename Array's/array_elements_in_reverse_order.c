#include<stdio.h>

// Reverse Order In aArray Elements

 int main()
 {

    int a[5], i ;
    printf("Enter Array Element :");

    for(i=0; i<=4; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n Reverse Array Elements :");
    for(i=4; i>=0; i--)
    {
        printf("%d ", a[i]);
    }

    getchar();

 }
