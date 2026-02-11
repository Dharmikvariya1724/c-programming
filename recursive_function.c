
#include<stdio.h>

int sum(int num){
    if(num>0){
        return num+sum(num-1);
    }else{
        return 0;
    }
}

int main(){
    int value=sum(10);
    printf("sum : %d", value);

getchar();

}
