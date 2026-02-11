#include<stdio.h>

int main()
{

    // Sum OF Array In Element.

    int a[5],sum=0,i;
    printf("Enter Array Elements :");

    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Sum Of Array Elements :");
    for(i=0;i<5;i++)
    {
       sum= sum+a[i];
    }
    printf("%d", sum);

    getchar();
}
