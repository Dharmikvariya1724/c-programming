#include<stdio.h>

int main(){

    int a=10, *ptr;

    ptr=&a;


    printf("%d \n", a);
    printf("%p \n", &a);
    printf("%p \n", ptr);
    printf("%d \n", *ptr);

    (*ptr)++;

    printf("\n \n");

    printf("%d \n", a);
    printf("%d \n", *ptr);

    getchar();

}
