#include<stdio.h>

void main (){

float a[5];
int i;
float s=0;
float avg;
int b=0;

printf("Enter A 5 Subject Mark :");

    for (i=0;i<5;i++){

        scanf("%f", &a[i]);

       // printf(" your Marks is %d \n", a[i]);

    }
        for (i=0;i<5;i++){

        s=s+a[i];

        // printf("your Marks is :%d \n", a[i]);

       printf(" your Marks is %.2f \n", a[i]);

       if (a[i] <33){
       b = 1;
       }

    }

    printf("total Of Mark is: %.2f \n", s);

    avg=(s/500)*100;

    printf("Your Total Pasantage is : %.3f \n" , avg);

   // printf("math:%d \n sci:%d \n S.S:%d \n Gujrati:%d \n English:%d  \n" , a[0], a[1], a[2], a[3], a[4]);
    if (b == 1){
        printf("you are a fail \n");
   }else if (avg>=50 && avg <=75){
        printf("congratulations You First Class pass");
   }else if (avg>=75){
        printf("congratulations You Distinction ");
   }else if (avg>33){
        printf(" you are pass\n");
   }else{
        printf("you are fail");
   }

    getchar();

}
