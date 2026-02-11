
#include<stdio.h>

void main(){

    int n,r,d=0,base=1;

    printf("Enter a Number :");
    scanf("%d", &n);

   while(n>0){
    r=n%10;
    d=d+r*base;
    n=n/10;
    base=base*2;
   }
   printf("Decimal Number is %d",d);

   /* OUTPUT

   User input no: 1000
   Output : 8

   decode : 1 0 0 0 <- User Input Number
          : 8 4 2 1 <- Output Number = 8
*/


getchar();
}
