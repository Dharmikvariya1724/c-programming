#include<stdio.h>

// Swap Two Numbers Using Pointers

void main(){

    int a,b,*p,*q,temp;

    p = &a;
    q = &b;

    printf("Enter Two Number :\n");
    scanf("%d %d", &a , &b);

    printf("Before Swapping: %d %d \n", a, b);

    temp = *p;
    *p = *q;
    *q = temp;

    printf("After Swapping : %d %d ", *p , *q);

    getchar();

    /* OUTPUT

    User Input: 50 30
    Output : 30 50
    */

}
