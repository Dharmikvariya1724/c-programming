#include<stdio.h>

void main(){

    int i, size, pos, item, a[100];

    printf("Enter element :");
     scanf("%d", &size);

     for(i=0; i<size; i++)
     {
         scanf("%d", &a[i]);
     }
     printf("Enter element in Any Position :");
     scanf("%d", &pos);

     printf("Enter element New Element :");
     scanf("%d", &item);

     for(i=size; i>=pos; i--)
     {
         a[i] = a[i-1];

     }

  // debuging     // printf("%d Old Element \n ", a[i-1]);
  // debuging      // printf("%d New value Add in This Position \n ", a[i]);

    a[pos] = item;
    size++;

 // debuging  //  printf(" Add new Value : %d \n", a[pos]);

     printf("After insert Elements At the Your position :");
     for(i=0; i<size; i++)
     {
         printf("%d ", a[i]);
     }

getchar();
}
