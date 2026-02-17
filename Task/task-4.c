#include<stdio.h>

void main(){
/*
    int num, first, last;

for(int i=10; i<=500; i++)
{
    last= i % 10;
    num = i;

    while(num >=10)
    {
        num = num / 10;
    }
    first = num;

    if( first==last)
    {
        printf("%d ",i);
    }

}
*/

/*
// WPA last 300 number print and every number Digits is Even 20 22 24 26 28 40..

    int num, first, last ;

    for(int i=1; i<=100; i++)
    {
        num = i;
        last=1;

        while(num >0)
        {
            first = num % 10;

            if( first %2!=0 )
            {
                last= 0;
                break;
            }
            num /= 10;
        }
        if(last == 1){
            printf("%d ", i);
        }
    }
*/

/*
// WAP In All number to reverse number Print.

int n=500,r;
while(n>0)
{
    r=n%10;
    printf("%d", r);
    n = n/10;
}
*/

// W.A.P Alternate Sign Pattern 1 -2 3 -4 5 -6 7 -8..

/*
int n = 1;

for (int i = 1; i <=50; i++) {
    printf("%d ", i * n);
    n = -n;
}
*/
/*
// W.A.P Composite Numbers <50;
    int count;
    for(int i=1; i<=50; i++)
    {
        count = 0;
        for(int j=1; j<=i; j++)
        {
            if(i % j ==0)
            {
                count++;
            }
        }
        if(i>1 && count >2)
        {
            printf("%d ", i);
        }
    }
*/

/*

// W.a.p 1000 Armstrong Numbers print
    int n,r,arm,c,i;

for(i=1; i<1000; i++)
{
    c=i;
    arm=0;
    while(c>0){
        r=c%10;
        arm=(r*r*r)+arm;
        c=c/10;
    }
    if(i==arm){
        printf("%d ", i);
	}
}
*/

/*
// W.A.P 1000 Palindrome Numbers Print

    int n,c,s,r, i;

    for(i=1; i<1000; i++)
    {
        c=i;
        s=0;

        while(c>0)
        {
            r=c%10;
            s=r+(s*10);
            c=c/10;
        }
        if(i==s){
            printf("%d ",i);
        }
    }

*/

/*

// even Fibonacci numbers print

    int a=0,b=1,c,i;
    for(i=1; i<30; i++){
        if(a%2==0){
          printf("%d ", a);
        }
   //   printf("%d ", a);
        c=a+b;
        a=b;
        b=c;
    }
*/


getchar();

}
