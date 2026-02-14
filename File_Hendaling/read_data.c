#include<stdio.h>
#include<string.h>

void main(){

    char name[50];
    char address[50];
    char mobile[10];
    char file[200];
    char filename[300];

    FILE *fp;

    char data[200];

    // Not Work a Dynamic data Show.

    printf("Enter File Name : ");
    fgets(file, sizeof(file), stdin);

    file[strcspn(file, "\n")] = 0;

    // Full Path + Dynamic Name
    sprintf(filename,"D:/C_C++_DHARMIK/c-programming/File_Hendaling/%s.txt",file);

  //  printf("Full Path: %s\n", filename);

    fp = fopen(filename, "r");

 //   fp = fopen("D:/C_C++_DHARMIK/c-programming/File_Hendaling/dharmik.txt","r");

    while(fgets(data,sizeof(data),fp)!=NULL)
    {
        printf("%s", data);
    }

    fclose(fp);

    printf("\n");

    if(fp == NULL){
         printf("File Not Found. Check Location!\n");
    }else{
        printf("File Opened Successfully!\n");
    }


    getchar();
}
