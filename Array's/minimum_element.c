#include<stdio.h>

// Minimum Elements

void main(){

    int a[100],size,i, min;
    printf("Enter Size Of Array :");
    scanf("%d",&size);
    printf("Enter value in array :");

    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    for(i=0; i<size; i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf("Minimum Value of Array %d ", min);

    getchar();

}
