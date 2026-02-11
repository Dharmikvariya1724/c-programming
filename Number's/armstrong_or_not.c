#include<stdio.h>

void main(){

    int n,r,arm=0,c;

    printf("Enter any Number :");
    scanf("%d", &n);
    c=n;
    while(n>0){
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm){
        printf("This Is Armstrong Number :)");
    }else{
        printf("Not Armstrong Number :(");
    }

/* OUTPUT

    User Input : 153
    Output : This Is Armstrong Number :)
*/


    getchar();
}
