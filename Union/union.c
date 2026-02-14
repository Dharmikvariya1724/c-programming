#include<stdio.h>

union payment
{
    int cash;
    float online;
};
int main(){

    union payment p;

    p.cash = 400;
    printf("Cash Payment : %d \n" , p.cash);

    p.online= 299.99;
    printf("Online Payment : %f", p.online);

getchar();

}