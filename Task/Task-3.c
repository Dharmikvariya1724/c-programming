// WAP In This sequence: 3 5 7 12 15 17 22 25 27

#include<stdio.h>

void main(){

 // int i, j , n;
/*
for(i=1; i<=27; ++i)
{
    if(j=i*2-1)
    {
        if(j==3 || j==5 || j==7 )
        {
            printf("%d ", j);
        }
    }
    if(j=i*2-2)
    {
        if(j==12)
        {
            printf("%d ", j);
        }
    }
    if(j=i*2-1)
    {
        if(j==15 || j==17)
        {
            printf("%d ", j);
        }
    }
    if(j=i*2-2)
    {
        if(j==22)
        {
            printf("%d ", j);
        }
    }
    if(j=i*2-1)
    {
        if(j==25 || j==27)
        {
            printf("%d ", j);
        }
    }
}
*/

/*

printf("\n \n");

for (i=3; i<=27; i++)
{
    if(i==3 || i==5 || i==7 || i== 12 || i==15 || i==17 || i==22 || i==25 || i==27 )
        printf("%d ", i);
}
*/
/*

printf("\n \n");

for(i=3; i<=27; i++)
{
    if( i%10==2 || i==3 || i%10==5 || i%10==7 )
    {
        printf("%d ", i);
    }
}
*/
/*
int num = 3;

for(i=1; i<9; i++)
{
    if(i==1)
    {
        num +=2;
    }else if{
        num +=5;
    }
    printf("%d", num);
}
*/

/*

    int num = 3;
    int i;

    printf("%d ", num);

    for(i = 1; i < 9; i++)
    {
        if(i == 1 || i == 2 || i == 5 || i == 8)
            num += 2;
        else if(i == 3 || i == 6)
            num += 5;
        else
            num += 3;

        printf("%d ", num);
    }

*/
/*
int num = 3;
for(i=0;i<9;i++){
    printf("%d ",num);
    if((i+1)%3==0){
        num+=5;
    }
    else{
        num+=2;
    }
}
*/
/*
    int num = 3;
    int count = 0;

    while (count < 9) {
        printf("%d ", num);
        count++;

        if (count % 3 == 0) {
            num += 5;
        } else {
            num += 2;
        }
    }
*/

/*
    int n = 3;
    int i,r;

    printf("Enter a Number :");
    scanf("%d", &r);

    printf("%d ", n);

    for(i = 1; i < r; i++)
    {
        if(i==1 || i==2 || i==5 || i==8)
        {
            n+=2;
        }
        else if(i==3 || i==6)
        {
            n+=5;
        }
        else{
            n+=3;
        }
        printf("%d ", n);
    }
*/

/*

    int n = 3;
    int i,r,num;

    printf("Enter a Number :");
    scanf("%d", &r);

    printf("%d ", n);

    for(i = 1; i < r; i++)
    {
        num = i%7;

        if(num==1 || num==2 || num==5 )
        {
            n+=2;
        }
        else if(num==3 || num==6)
        {
            n+=5;
        }
        else{
            n+=3;
        }
        printf("%d ",n);
    }
*/

/*
    int i,n=3;
    printf("%d ", n);

    for(i = 1; i < 100; i++)
    {
        if(i % 3 == 0)
        {
            n +=6;
        }
        else
        {
            n += 2;
        }
        printf("%d ",n);
    }
*/

/*
    for(n = 3; n <= 333; n++)
    {
        if(n % 10 == 3 || n % 10 == 5 || n % 10 == 7)
        {
            printf("%d ", n);
        }
    }

// print a number 1 4 9 16 25

    for (n=1; n<=10; n++)
    {
        printf("%d ", n*n);
    }
*/
/*
// last Digit  2 4 8
    for (n=1; n<=500; n++)
    {
        if(n % 10 == 2 || n % 10 == 4 || n % 10 == 8)
        {
            printf("%d ",n);
        }

    }
*/
/*
// WAP 3 6 9 12 18 21 24 27 33 36 39 42 48..

for(n=1; n<50; n++)
{
    if(n%3==0 && n%5!=0)
    {
        printf("%d ", n);
    }
}
*/
/*
// WAP 5 9 11 15 17 21 23...

 for(int n = 5; n <= 50;)
    {
        printf("%d ", n);
        if((n - 5) % 6 == 0){
            n += 4;
        }
        else{
            n += 2;
        }
    }
// OP : 5 9 11 15 17 21 23 27 29 33 35 39 41 45 47
*/

/*
// WAP 400 324 256 196...

for(int n=20; n>1; n--)
{
    if(n % 2 ==0)
    {
        printf("%d ", n*n);
    }
}

Op : 400 324 256 196 144 100 64 36 16 4

*/

/*
// WAP number to sum 5 print ( 0+5=5, 1+4=5, 2+3=5 )

    for(int n = 10; n <=200; n++) {
        int temp = n;
        int sum = 0;

        while(temp > 0) {
            sum = sum + temp % 10;
            temp /= 10;
        }

        if(sum == 5) {
            printf("%d ", n);
        }
    }

Op: 14 23 32 41 50 104 113 122 131 140

*/
/*
for(int n=1;n<=10;n++)
{
    int a=n;
    if(n%2==1){
        printf(" Odd %d \n",a*a*a);
    }else{
        printf("Even %d \n", a*a);
    }
}
*/

/*
int n=100, a;

 for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                a++;
        }
        if (a > 2)
            printf("%d is NOT prime", n);
        else
            printf("%d is prime", n);
*/




getchar();

}
