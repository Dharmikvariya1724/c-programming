#include<stdio.h>

void main(){

    int n ,a=0;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=2;i<=n-1; i++ ){
        if(n%i==0){
            a = 1;
            break;
        }
    }
    if(n==1){
        printf("1 is a neither prime nor composite:\n");
    }else if(a==0){
        printf("the give number is Prime\n");
    }else{
        printf("the given number is composite:\n");
    }
}
