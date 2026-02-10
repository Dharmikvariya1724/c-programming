#include<stdio.h>

void main(){


// Tribonacci Series

    int a=0,b=1,c=2,d,n,i;
    printf("Enter Number :");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("%d ", a);
        d=a+b+c;
        a=b;
        b=c;
        c=d;
    }

/* OUTPUT

USER INPUT : 10;

    0 1 2 3 6 11 20 37 68 125
*/

    getchar();
}
