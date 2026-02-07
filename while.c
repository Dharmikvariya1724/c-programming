#include<stdio.h>

void main(){

    /*
    int a=1;
    while(a<=100){

    if(a<=10){
        printf("%d ", a);

    }else if(a>10 && a<=20){
           printf("%d ", a);
    }
        a++;

    }

    */
/*

   int x=4,y,z;

   y=--x;
   z=x--;

   printf(" x=%d \n y=%d \n z=%d", x,y,z);

   */

   int x=4,y=0,z;

   while(x>=0){
        x--;
        y++;

        if(x==y){
            continue;
        } else{
            printf("\n %d %d", x,y);

           // break;
        }
   }

}
