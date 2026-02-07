#include <stdio.h>

void main() {

/*

int i;

for(i=0;i<=5;i++){
    printf("lOOP START \n");
}
    printf("LOOP END \n");
*/

int i,j,c=0;

    // for (i=1;i<=5;i++){

    //     for(j=1;j<=i;j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

        for (i = 1; i <= 5; i++) {
            for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n", i);
    }

}
