#include<stdio.h>

void main(){

    int a[100], size, i, item;

    printf("Enter size of Array :");
    scanf("%d", &size);

    printf("Enter Element In Array :");
   // printf("Address of array 'a' is %p\n", (void *)&a[0]);

    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Insert Element In Array :");
    scanf("%d", &item);
    size= size+1;

    a[size-1]= item;
    printf("After insert Elements At the Ending Of Array :");

    for(i=0; i<size; i++)
    {
        printf("%d ", a[i]);
     //  printf("Size of a[i] is %d bytes\n", sizeof(a[i]));
    }

    getchar();

}
