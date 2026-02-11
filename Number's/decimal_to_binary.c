
#include<stdio.h>

void main(){

    int n,b=0,r,base=1;
    printf("Enter a Decimal Number :");
    scanf("%d", &n);

    while(n>0){
        r=n%2;
        b=b+r*base;
        n=n/2;
        base=base*10;
    }
    printf("Binary No Is: %d", b);

getchar();
}
