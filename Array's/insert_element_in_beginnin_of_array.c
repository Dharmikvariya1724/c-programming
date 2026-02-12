#include<stdio.h>

void main(){

    int a[100], n, i, item;

    printf("Enter number :");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
       scanf("%d", &a[i]);
    }

    printf("Insert Element In Array at beginning :");
    scanf("%d", &item);
    n++;

    for(i=n; i>1; i--)
    {
        a[i-1]=a[i-2];
    }

    a[0]=item;
    printf("resultant Array Element :");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    getchar();

}
