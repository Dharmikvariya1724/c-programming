#include<stdio.h>

void main(){

    /*

    int choice ;

    printf("Enter Your Order Number :");
    scanf("%d", &choice );

    switch (choice)
    {
        case 1:
            printf("You order Pizza :)");
        break;

        case 2:
            printf("You order TimePass :)");
        break;

        case 3:
            printf("You order Pasta:)");
        break;
        
        case 4:
            printf("You order Momos:)");
        break;
        
        default:
            printf("Nothing Any order :(");
        break;
    }

    */

    int n,a,b,f=1,i,ch;

    printf("Enter User Choice :");
    scanf("%d", &ch);

    switch (ch)
    {
        case 1:
            printf("Enter Ant no :");
            scanf("%d", &n);
            for (i = 1; i <=n; i++)
            {
                printf("%d \n", i);
            }
            
        break;

        case 2:
            printf("Enter two no :");
            scanf("%d %d", &a, &b);
            n=a+b;
            printf("sum = %d \n", n);
            
        break;

        case 3:
            printf("Enter Any no :");
            scanf("%d", &n);
            for (i = 1; i <=n; i++)
            {
                f=f*i;
            }
            printf("Factorial No = %d \n", f);
        break;
        
        default:
            printf("Invalid User Choice");    
        break;
    }

    getchar();

}