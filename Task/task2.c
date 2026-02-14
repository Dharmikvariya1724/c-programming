
#include<stdio.h>

void main(){

int i, j, n=1;

for(i=0;i<=2;i++)
{
    for(j=2; j>=i; j--)
    {
        printf(" ");
    }
    for(j=0; j<=i; j++)
    {
        printf(" *");
    }
    printf("\n");
}

for(i=4;i>=0;i--)
{
    for(j=3; j>=i; j--)
    {
        printf(" ");
    }
    for(j=1; j<=i; j++)
    {
        printf(" %d", n);
        ++n;
    }
    printf("\n");
}


getchar();

}
