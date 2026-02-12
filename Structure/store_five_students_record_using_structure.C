#include<stdio.h>

struct student
{
    int s_roll;
    char s_name[50];
    int marks;
};

int main(){

    struct student s[5];

    int total = 0, i;
    float avg ;

    printf("Enter A Student Records : \n \n");

    for(i=0; i<5; i++)
    {
        printf("Enter Student Roll Number :");
        scanf("%d", &s[i].s_roll);

        printf("Enter Student Name :");
        scanf("%s", s[i].s_name);

        printf("Enter Student Marks :");
        scanf("%d", &s[i].marks);

    }
    printf("\n \n");

    printf("Students record's \n \n");

    for(i=0; i<5; i++)
    {
        printf("student Roll Number : %d \n", s[i].s_roll);
        printf("student Name : %s \n", s[i].s_name);
        printf("student marks : %d \n", s[i].marks);

    }

getchar();
}
