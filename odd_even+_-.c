#include <stdio.h>

int main() {
int a;
printf("Enter a Number :");

scanf("%d",&a);

int sum = 0;
for(int i=1; i<=a; i++ ){

    if(i%2!=0){
        printf("sum = sum + i");
    }else{
        printf("sum = sum - i");
    }
}

}
