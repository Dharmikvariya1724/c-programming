#include<stdio.h>

void swap(int *a ,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

    printf("Swap(): a=%d b=%d \n", *a,*b);
}

int main()
{
    int a=10, b=20;

    swap(&a,&b);

    printf("main(): a=%d b=%d", a,b);

    getchar();
}
