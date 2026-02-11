#include<stdio.h>

void main(){

    float a,b,c;
    char ch;

    printf("Enter number :");
    scanf("%f", &a);

    printf("Enter Operator (+, -, *, /):");
    scanf(" %c", &ch);

    printf("Enter a Second number :");
    scanf("%f", &b);

    switch(ch)
    {
        case '*' : c=a*b;
            printf("Your Ans Is %f", c);
            break;
        case '-' : c=a-b;
            printf("Your Ans Is %f", c);
            break;
        case '+' : c=a+b;
            printf("Your Ans Is %f", c);
            break;
        case '/' : c=a/b;
            printf("Your Ans Is %f", c);
            break;
        default: printf("Invalid Operator :(");
        break;
    }

getchar();
}
