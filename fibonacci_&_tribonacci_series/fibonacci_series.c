#include<stdio.h>
void main(){

    // Fibonacci Series

    int a=0,b=1,n,c,i;
    printf("Enter Number :");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("%d ", a);
        c=a+b;
        a=b;
        b=c;
    }

/* OUTPUT
    User INPUT : 10;

    0 1 1 2 3 5 8 13 21 34
*/

    getchar();
}
