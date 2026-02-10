#include<stdio.h>

void main(){

/*
    // sum of All the Even number's

    int n;
    printf("Enyter a Number :");
    scanf("%d", &n);

    int sum = 0;
    int lastDigit = 0;

    while (n!=0)
    {
        lastDigit = n%10;
        sum = sum + lastDigit;
        n = n/10;
    }

    printf("The sum of Digit %d", sum);

*/

     /*

    // sum of All the Even number's

    int n;
    printf("Enyter a Number :");
    scanf("%d", &n);

    int sum = 0;
    int lastDigit = 0;

    while (n!=0)
    {
        lastDigit = n%10;
        if(lastDigit % 2 == 0){
            sum = sum + lastDigit;
        }
        n = n/10;
    }

    if(n%2 == 0){
        printf("%d its even :", n);
    }

    printf("sum of All the Even number's %d", sum);

    */

    /*

    // revers Order number print

    int n ;
    printf("Enyter a Number :");
    scanf("%d", &n);

    int r = 0;

    while (n!=0)
    {
        r = r*10;
        r = r +(n%10);
        n = n / 10;
    }
    printf("Your Ans is %d", r);
    */

    /*
   // Rever Order Odd Number Print 9,7,5,3...
        int n ;
    printf("Enyter a Number :");
    scanf("%d", &n);

    int r = 0;

    while (n!=0)
    {

        if(n % 2 != 0){
            r = r*10;
            r = r +(n%10);
        }
        n = n / 10;
    }
    printf("Your Ans is %d", r);

    */

    /*

   // Reverc Order Even NUmber Print 8,6,4,2...

    int n ;
    printf("Enyter a Number :");
    scanf("%d", &n);

    int r = 0;

    while (n!=0)
    {

        if(n % 2 == 0){
            r = r*10;
            r = r +(n%10);
        }
        n = n / 10;
    }
    printf("Your Ans is %d", r);

    */

   /*

   // Enter a Any Singlr Number to sum a odd and Even Number:1-2+3-4+5-6....

    int a;
    printf("Enter a Number :");

    scanf("%d",&a);

    int sum = 0;
    for(int i=1; i<=a; i++ ){

        if(i%2!=0) sum = sum + i;
        else sum = sum - i;
    }

    printf("this Sum Is %d ", sum);
    */

    /*

    int marks;

    printf("enter Your marks :");
    scanf("%d", &marks);

    if (marks>=33)
    {
        printf("You are passs :");
    }else{
        printf("You Are Fail :");
    }
    */

    /*

    int sum1, sum2;

    printf("Entr a One Number :");
    scanf("%d", &sum1);

    printf("Entr a One Number :");
    scanf("%d", &sum2);

    int add = sum1 + sum2;

    if (add<=0)
    {
        printf("Your Ans Is Nagetive Site to Sorry this Ans is not a Print :");
    }else{
        printf("Addiction : %d" , add);
    }

    */

}
