#include<stdio.h>
#include<string.h>

void main(){

    char name[50];
    char address[50];
    char mobile[10];
    char file[20];
    char filename[30];

    FILE *fp;

    char data[200];

    printf("Enter File Name :");
    fgets(file, sizeof(file), stdin);

    file[strcspn(file, "\n")] = 0;
    sprintf(filename, "%s.txt", file);

    fp = fopen(filename, "w");
/*
    printf("Enter Student Name :");
    fgets(file,sizeof(file),stdin);
   fp=fopen(fp, "%s.txt","w", file);
*/
    printf("Enter Student Name :");
    fgets(name, sizeof(name),stdin);

    printf("Enter a Address :");
    fgets(address, sizeof(address),stdin);

    printf("Enter a Mobile No :");
    fgets(mobile, sizeof(mobile),stdin);

    fprintf(fp,"Name : %s", name);
    fprintf(fp,"Address : %s", address);
    fprintf(fp,"Mobile No : %s", mobile);

    fclose(fp);

    printf("Student Record Save Successfully");

    getchar();
}
