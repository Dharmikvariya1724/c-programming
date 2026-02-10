#include<stdio.h>

void main(){
/*
    int n,count=0,i;

    printf("Enter any Number :");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2){
        printf("This is Prime Number");
    }else{
        printf("Not Prime Number");
    }
*/
    /* OUTPUT

    User Input: 2,3,5,7....
    OUTPUT: This is Prime Number

    User Input: 1,4,6,8,9,10....
    OUTPUT: Not Prime Number

    */

    /*

    // Print all Prime Numbers between Two Numbers

    int n1, n2, i, j;
    printf("Enter Range: ");
    scanf("%d %d", &n1, &n2);

    for (i = n1; i <= n2; i++) {
        if (i <= 1)
            continue;
        for (j = 2; j <= i; j++) {
            if (i % j == 0)
                break;
        }
        if (i == j) {
            printf("%d ", i);
        }
    }
    */

    /* OUTPUT

    First Input : 1 and
    last Input : 20

    OUTPUT : 2 3 5 7 11 13 17 19

    */

/*

    // Reverse Order print Number

    int n,r;
    printf("enter a number :");
    scanf("%d", &n);

    while(n>0)
    {
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
*/

/* OUTPUT

    User Input: 123456789
    OUTPUT: 987654321
*/
    getchar();

}
