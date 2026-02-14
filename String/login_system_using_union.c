#include<stdio.h>
#include<string.h>

    union login{
        char name[20];
        char pass[20];
    };

void main(){

union login log;

    printf("Enter A Username :");
    scanf("%s", log.name);

    if( strcmp(log.name,"Dharmik")==0)
    {
        printf("Enter A Password :");
        scanf("%s", log.pass);

        if(strcmp(log.pass,"1724")==0)
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
