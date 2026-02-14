#include<stdio.h>
#include<string.h>

void main(){

    char oldfile[100];
    char newfile[100];
    char oldpath[300];
    char newpath[300];

    printf("Enter Old File Name : ");

    fgets(oldfile, sizeof(oldfile), stdin);
    oldfile[strcspn(oldfile, "\n")] = 0;

    printf("Enter New File Name : ");

    fgets(newfile, sizeof(newfile), stdin);
    newfile[strcspn(newfile, "\n")] = 0;

    sprintf(oldpath,"D:/C_C++_DHARMIK/c-programming/File_Hendaling/%s.txt",oldfile);

    sprintf(newpath,"D:/C_C++_DHARMIK/c-programming/File_Hendaling/%s.txt",newfile);

    if(rename(oldpath, newpath) == 0){
        printf("File Renamed Successfully :)");
    }else{
        printf("Rename Failed! Check File Name or Path.");
    }

getchar();

}
