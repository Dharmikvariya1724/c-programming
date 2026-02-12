#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    int *price;

    printf("Enter Number If item :");
    scanf("%d", &n);

    price = malloc(n* sizeof(int));

    for( int i=0; i<2; i++)
    {
        printf("Enter Price For items :%d", i+1);
        scanf("%d", &price[i]);
    }

    printf("Entered price For items :");

    for(int i=0; i<2; i++)
    {
        printf("%d ", price[i]);
    }


getchar();

}
