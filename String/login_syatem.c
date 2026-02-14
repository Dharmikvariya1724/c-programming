#include<stdio.h>
#include<string.h>

void main(){

    char name[20], pass[20];

    printf("Enter A Username :");
    scanf("%s", name);

    if( strcmp(name,"Dharmik")==0)
    {
        printf("Enter A Password :");
        scanf("%s", pass);

        if(strcmp(pass,"1724")==0)
        {
             printf("Login Successfully :)");
        }else{
            printf("Invalid Password! :(");
        }
    }else{
        printf("Invalid UserName :(");
    }

getchar();

}
