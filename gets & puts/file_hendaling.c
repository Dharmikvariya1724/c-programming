#include<stdio.h>

void main(){

    FILE *fp;
    fopen("student.txt","w");

    fprintf(fp,"Name : Dharmik \n");
    fprintf(fp,"Address : Katargam \n");
    fprintf(fp,"Mobile No : 9328072459 \n");

    fclose(fp);

    printf("Student Record Save Successfully");

    getchar();
}
