#include<stdio.h>

void main(){

// 12.
/*
    int a,b;

    for(a=1;a<=5;a++){
        for(b=1;b<=5;b++)
        {
            if(a==1 || a==5 || b==1 || b==5){
                printf(" *");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
*/

    /* OUTPUT

    * * * * *
    *       *
    *       *
    *       *
    * * * * *

    */

// 13.

/*
    int a,b;

    for(a=1;a<=11;a++){
        for(b=1;b<=11;b++)
        {
            if(a==1 || a==6 || a==11 || b==1 || b==6 || b==11 ){
                printf(" *");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
*/

/* OUTPUT

 * * * * * * * * * * *
 *         *         *
 *         *         *
 *         *         *
 *         *         *
 * * * * * * * * * * *
 *         *         *
 *         *         *
 *         *         *
 *         *         *
 * * * * * * * * * * *

 */

// 14.

/*
    int i, j;

    for(i=1; i<=5; i++) {
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++) {
            if(i==1 || i==5 || j==1 || j==2*i-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
*/

/* OUTPUT

    *
   * *
  *   *
 *     *
*********

*/

// 15.

/*

int a,b;

for(a=5; a>=1; a--){
    for(b=1; b<=5-a; b++){
        printf(" ");
    }
    for(b=1;b<=2*a-1; b++){
        if(a==1 || a==5 || b==1 || b==2*a-1){
            printf("*");
        }else{
            printf(" ");
        }
    }
    printf("\n");
}
*/

/* OUTPUT

*********
 *     *
  *   *
   * *
    *

*/

// 16.

/*

    int i, j, a, b;

    for(i=1; i<=5; i++) {
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++) {
            if(i==1 || j==1 || j==2*i-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    for(a=4; a>=1; a--){
        for(b=1; b<=5-a; b++){
            printf(" ");
        }
        for(b=1;b<=2*a-1; b++){
            if(a==1 || b==1 || b==2*a-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
*/

// 17.

/* OUTPUT
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *

*/

/*
    int i, j, a, b;

    for(a=5; a>=1; a--){
        for(b=1; b<=5-a; b++){
            printf(" ");
        }
        for(b=1;b<=2*a-1; b++){
            if(a==1 || a==5 || b==1 || b==2*a-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=2; i<=5; i++) {
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++) {
            if(i==1 || i==5 || j==1 || j==2*i-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
*/

// 18.

    /* OUTPUT

*********
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*********

  */

// 19.
/*
    int a,b;

    for(a=1;a<=7;a++){
        for(b=1;b<=5;b++)
        {
            if(a==3|| b==3){
                printf(" *");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
*/
/* OUTPUT

     *
     *
 * * * * *
     *
     *
     *
     *

*/

    getchar();
}
