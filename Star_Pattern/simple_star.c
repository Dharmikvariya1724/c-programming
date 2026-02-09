#include<stdio.h>

void main(){
// 01.
/*
    int a,b;
    for(a=1; a<=5; a++)
        {
        for(b=1; b<=a; b++)
        {
            printf("* ");
        }
        printf("\n");
    }
*/

   /* FIRST OUTPUT

    *
    * *
    * * *
    * * * *
    * * * * *

    */

// 02.
/*

    int a,b;

    for(a=1; a<=5; a++)
        {
        for(b=5; b>=a; b--)
        {
            printf(" *");
        }
        printf("\n");
    }
*/

    /* SECOND OUTPUT

    * * * * *
    * * * *
    * * *
    * *
    *

    */
// 03.

    /*

    int i,j,k;

    for(i=1; i<=5; i++)
        {
        for(j=i; j<5; j++)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    */

    /*

        *
       **
      ***
     ****
    *****
*/

// 04.

/*
    int i,j,k;

    for(i=1; i<=5; i++){
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(k=5; k>=i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
*/

/*
    *****
     ****
      ***
       **
        *
*/

// 05.

/*
int i, j;

    for(i=1; i<=5; i++) {

        for(j=1; j<=5-i; j++) {
            printf(" ");
        }

        for(j=1; j<=2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
*/

/*

        *
       ***
      *****
     *******
    *********

*/

// 06.

/*

 // int i, j;

    for(i=5; i>=1; i--) {

        for(j=1; j<=5-i; j++) {
            printf(" ");
        }

        for(j=1; j<=2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
*/

/* OUTPUT

*********
 *******
  *****
   ***
    *

*/

// 07.

/*

int i, j;

    for(i=1; i<= 5; i++) {

        for(j=1; j<= 5-i; j++) {
            printf(" ");
        }

        for(j=1; j<=2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(i=4; i>=1; i--) {

        for(j=1; j<= 5-i; j++) {
            printf(" ");
        }

        for(j=1; j<=2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
*/

/* OUTPUT

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/

// 08.

/*

int i, j;

    for(i=5; i>=1; i--) {

        for(j=1; j<= 5-i; j++) {
            printf(" ");
        }

        for(j=1; j<=2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for(i=2; i<= 5; i++) {

        for(j=1; j<= 5-i; j++) {
            printf(" ");
        }

        for(j=1; j<=2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
*/

/* OUTPUT

*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********

*/

// 09.

/*

    int i,j,k;

    for(i=1; i<=5; i++)
        {
        for(j=i; j<5; j++)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
*/

    /* OUTPUT

        *
       * *
      * * *
     * * * *
    * * * * *

    */

// 10.

/*

  //  int i,j,k;

    for(i=1; i<=5; i++)
        {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(k=5; k>=i; k--)
        {
            printf("*");
        }
        printf("\n");
    }

*/

    /* OUTPUT

        * * * * *
         * * * *
          * * *
           * *
            *

    */

// 11.

    /*

    int a,b;

    for(a=1;a<=5;a++){
        for(b=1;b<=5;b++)
        {
            printf("* ");
        }
        printf("\n");
    }

    */

    /* OUTPUT

    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *

    */


    getchar();

}
