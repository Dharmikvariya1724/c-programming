#include<stdio.h>

void main(){

    float a,b,c,*p,*q;
    char ch;

    printf("Enter number :");
    scanf("%f", &a);

    printf("Enter Operator (+, -, *, /):");
    scanf(" %c", &ch);

    printf("Enter a Second number :");
    scanf("%f", &b);

    p = &a;
    q = &b;

    switch(ch)
    {
        case '*' : c = *p * *q;
            printf("Your Ans Is %f", c);
            break;
        case '-' : c = *p - *q;
            printf("Your Ans Is %f", c);
            break;
        case '+' : c = *p + *q;
            printf("Your Ans Is %f", c);
            break;
        case '/' : c = *p / *q;
            printf("Your Ans Is %f", c);
            break;
        default: printf("Invalid Operator :(");
        break;
    }

    getchar();

}
