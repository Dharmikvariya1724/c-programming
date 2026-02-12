#include<stdio.h>

void main(){

    int a[100][100], b[100][100], c[100][100], i, j, row, col;

    printf("Enter A ROW In Matrix : ");
    scanf("%d", &row);

    printf("Enter A COL In Matrix : ");
    scanf("%d", &col);

    printf("Enter A first matrix Number :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter A second matrix Number :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Sum in TWO Matrices

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
             c[i][j] = a[i][j] + b[i][j];
        }

    }

    // OUTPUT in 2D Array

    printf("Addition Of 2 Matrices Number: \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
             printf("%d ", c[i][j]);
        }
        printf("\n");
    }


    /* OUTPUT

    1 2 3
    4 5 6
    7 8 9

    */


getchar();
}
