#include<stdio.h>

void main(){

    int *p,*q,r,a,b;


    printf("Enter two Number :");

    scanf("%d%d", &a, &b);

    p=&a;
    q= &b;

    r = *p + *q;

    printf("Sum of Two Number : %d", r);

    getchar();
}
