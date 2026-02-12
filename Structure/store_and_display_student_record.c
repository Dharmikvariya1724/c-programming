#include<stdio.h>

struct stu
{
    int s_roll;
    char s_name[50];
    int marks[5];
};

void main(){

    struct stu s;

    int total = 0, i;
    float avg ;

    printf("Enter Student Roll Number :");
    scanf("%d", &s.s_roll);

    printf("Enter Student Name :");
    scanf("%s", &s.s_name);

    printf("Enter Student 5 Marks : \n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &s.marks[i]);
        total = total+s.marks[i];

       avg =(float)total / 5;
    }

    printf("student Roll Number : %d \n", s.s_roll);
    printf("student Name : %s \n", s.s_name);
    printf("student Total Marks : %d \n", total);
    printf("student Avg : %f \n", avg);

getchar();
}
