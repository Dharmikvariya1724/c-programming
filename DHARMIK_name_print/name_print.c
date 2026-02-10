#include<stdio.h>

void main(){

    // D
    int a,b;

    for(a=1;a<=5;a++){
        for(b=1;b<=5;b++)
        {
            if(a==1 || a==5 || b==2 | b==5 ){
                printf(" *");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\n");

    // H
    for(a=1;a<=5;a++){
        for(b=1;b<=5;b++)
        {
            if(a==3 || b==1 || b==5 ){
                printf(" *");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // A
    for(a=1;a<=5;a++){
        for(b=1;b<=5;b++)
        {
            if(a==1 || a==3 || b==1 || b==5 ){
                printf(" *");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

        printf("\n");

    // R
    for(a=1;a<=5;a++){
        for(b=1;b<=5;b++)
        {
            if(b == 1||(a == 1 && b < 5)||(a == 3 && b < 5)||(b == 5 && a == 1)||(b == 5 && a == 2)||(b == 5 && a == 3)||(a - b == 1)){
                printf(" *");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // M
    for(a=1;a<=5;a++){
        for(b=1;b<=5;b++)
        {
            if( (a==2 && b==2) || (a==2 && b==4) || (a==3 && b==3) || b==1 || b==5 ){
                printf(" *");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // I
    for(a=1;a<=5;a++){
        for(b=1;b<=5;b++)
        {
            if(a==1 ||a==5 || b==3){
                printf(" *");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // K
    for(a=1;a<=5;a++){
        for(b=1;b<=5;b++)
        {
            if((a==1 && b==1)||
               (a==1 && b==5)||
               (a==2 && b==4)||
               (a==3 && b==2)||
               (a==3 && b==3)||b==1||
               (a==4 && b==1)||
               (a==4 && b==4)||
               (a==5 && b==1)||
               (a==5 && b==5)){
                printf(" *");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
/* OUTPUT

 * * * * *
   *     *
   *     *
   *     *
 * * * * *

 *       *
 *       *
 * * * * *
 *       *
 *       *

 * * * * *
 *       *
 * * * * *
 *       *
 *       *

 * * * * *
 *       *
 * * * * *
 *   *
 *     *

 *       *
 * *   * *
 *   *   *
 *       *
 *       *

 * * * * *
     *
     *
     *
 * * * * *

 *       *
 *     *
 * * *
 *     *
 *       *

 */
    getchar();
}
