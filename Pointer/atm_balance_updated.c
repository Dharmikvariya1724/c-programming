#include<stdio.h>

void updateBal(int *bal){

    *bal=*bal+1000;
    printf("inside UpdateVal() : %d", *bal);

}

void main(){

    int bal = 6000;
    updateBal(&bal);
    printf(" \n Inside Main() : %d", bal);

getchar();

}
