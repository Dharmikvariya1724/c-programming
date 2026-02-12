
#include<stdio.h>

void main(){

    int a[100][100], b[100][100], c[100][100], d[100][100], z[100][100], i, j, row, col;

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

/*

    // Sum in TWO Matrices

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
             c[i][j] = a[i][j] + b[i][j];
        }

    }
*/

/*

    // OUTPUT in 2D Array Sum:

    printf("Addition Of 2 Matrices Number: \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
             printf("%d ", c[i][j]);
        }
        printf("\n");
    }

*/

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            d[j][i] = a[i][j];
        }
        printf("\n");
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            z[j][i] = b[i][j];
        }
        printf("\n");
    }

    printf("transpose Of First Matrices Number: \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
             printf("%d ", d[i][j]);
        }
        printf("\n");
    }

    printf("transpose Of second Matrices Number: \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
             printf("%d ", z[i][j]);
        }
        printf("\n");
    }

    /* OUTPUT

    User Input :
    1 2
    3 4

    Output :M
    1 3
    2 4

    */


getchar();
}
