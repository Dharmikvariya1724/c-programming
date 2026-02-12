#include<stdio.h>

void main(){

int a[100],b[100], i, j, size;

printf("Enter Array A Elements :");
scanf("%d", &size);

for(i=0; i<size; i++)
{
    scanf("%d", &a[i]);
}

for(i=0; i<size; i++)
{
    b[i] = a[i];
}

printf("\n Array Insert Element in B Array : \n");
for(i = 0; i<size; i++)
{
    printf("%d \n", b[i]);
}

/* output

User Input : 10 20 30 40 50 <-- In Value Insert a Array 'A'
Output: Show The Value in Value in Array 'B' : 10 20 30 40 50;
*/

getchar();
}
