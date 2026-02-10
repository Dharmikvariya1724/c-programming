#include<stdio.h>

void main(){
/*
int i, j;

for(i=1; i<=5; i++){
    for(j=1; j<=i; j++){
        printf("%d", i);
    }
    printf("\n");
}
*/

/* OUTPUT

1
22
333
4444
55555

*/


/*

int i, j;

for(i=5; i>=1; i--){
    for(j=1; j<=i; j++){
        printf("%d", i);
    }
    printf("\n");
}
*/

/* OUTPUT

55555
4444
333
22
1

*/

/*
int i,j;
for(i=1; i<=5; i++){
    for(j=1; j<=i; j++){
        printf("%d", j);
    }
    printf("\n");
}
*/

/*OUTPUT

1
12
123
1234
12345

*/

/*
int i,j;
for(i=5; i>=1; i--){
    for(j=1; j<=i; j++){
        printf("%d", j);
    }
    printf("\n");
}
*/

/*OUTPUT

12345
1234
123
12
1

*/

/*
int i,j;
for(i=1; i<=5; i++){
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }

        for(j=1; j<=i; j++) {
            printf("%d ", j);
        }
    printf("\n");
}
*/

/* OUTPUT

    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/

/*

int i, j;

for(i=1; i<=5; i++){
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }

        for(j=1; j<=i; j++) {
            printf("%d ", i);
        }
    printf("\n");
}

*/

/* OUTPUT

    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5

*/

/*

int i, j;

for(i=5; i>=1; i--){
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }

        for(j=1; j<=i; j++) {
            printf("%d ", i);
        }
    printf("\n");
}

*/


/* OUTPUT

5 5 5 5 5
 4 4 4 4
  3 3 3
   2 2
    1

*/


/*

int i, j;

for(i=1; i<=5; i++){
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }

        for(j=1; j<=i; j++) {
            printf("%d ", i);
        }
    printf("\n");
}

for(i=4; i>=1; i--){
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }

        for(j=1; j<=i; j++) {
            printf("%d ", i);
        }
    printf("\n");
}

*/


/* OUTPUT

    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
 4 4 4 4
  3 3 3
   2 2
    1

*/

/*
int i,j;
for(i=5; i>=1; i--){
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }

        for(j=1; j<=i; j++) {
            printf("%d ", j);
        }
    printf("\n");
}
*/

/* OUTPUT

1 2 3 4 5
 1 2 3 4
  1 2 3
   1 2
    1

*/

/*
int i,j;
for(i=1; i<=5; i++){
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }

        for(j=1; j<=2*i-1; j++) {
            printf("%d", i);
        }
    printf("\n");
}
*/

/* OUTPUT

    1
   222
  33333
 4444444
555555555

*/

/*

int i,j;
for(i=5; i>=1; i--){
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }

        for(j=1; j<=2*i-1; j++) {
            printf("%d", i);
        }
    printf("\n");
}

*/

/*OUTPUT

555555555
 4444444
  33333
   222
    1

*/

/*
int i,j;
for(i=1; i<=5; i++){
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }

        for(j=1; j<=2*i-1; j++) {
            printf("%d", i);
        }
    printf("\n");
}
for(i=4; i>=1; i--){
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }

        for(j=1; j<=2*i-1; j++) {
            printf("%d", i);
        }
    printf("\n");
}
*/

/* OUTPUT

    1
   222
  33333
 4444444
555555555
 4444444
  33333
   222
    1

 */

 /*

int i,j;

for(i=5; i>=1; i--){
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }

        for(j=1; j<=2*i-1; j++) {
            printf("%d", i);
        }
    printf("\n");
}
for(i=2; i<=5; i++){
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }

        for(j=1; j<=2*i-1; j++) {
            printf("%d", i);
        }
    printf("\n");
}

*/

/* OUTPUT

555555555
 4444444
  33333
   222
    1
   222
  33333
 4444444
555555555

*/


getchar();
}
