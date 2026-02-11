#include<stdio.h>

void main(){

    int matrix[2][3];
    int rows=2, col=3;

    printf("Enter a Any Element :");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Output Your Element : \n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

getchar();
}
