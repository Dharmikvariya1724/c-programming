#include<stdio.h>

void main(){

 int i, j;
/*
for(i=1; i<=27; ++i)
{
    if(j=i*2-1)
    {
        if(j==3 || j==5 || j==7 )
        {
            printf("%d ", j);
        }
    }
    if(j=i*2-2)
    {
        if(j==12)
        {
            printf("%d ", j);
        }
    }
    if(j=i*2-1)
    {
        if(j==15 || j==17)
        {
            printf("%d ", j);
        }
    }
    if(j=i*2-2)
    {
        if(j==22)
        {
            printf("%d ", j);
        }
    }
    if(j=i*2-1)
    {
        if(j==25 || j==27)
        {
            printf("%d ", j);
        }
    }
}
*/

/*

printf("\n \n");

for (i=3; i<=27; i++)
{
    if(i==3 || i==5 || i==7 || i== 12 || i==15 || i==17 || i==22 || i==25 || i==27 )
        printf("%d ", i);
}
*/
/*

printf("\n \n");

for(i=3; i<=27; i++)
{
    if( i%10==2 || i==3 || i%10==5 || i%10==7 )
    {
        printf("%d ", i);
    }
}
*/
/*
int num = 3;

for(i=1; i<9; i++)
{
    if(i==1)
    {
        num +=2;
    }else if{
        num +=5;
    }
    printf("%d", num);
}
*/

/*

    int num = 3;
    int i;

    printf("%d ", num);

    for(i = 1; i < 9; i++)
    {
        if(i == 1 || i == 2 || i == 5 || i == 8)
            num += 2;
        else if(i == 3 || i == 6)
            num += 5;
        else
            num += 3;

        printf("%d ", num);
    }

*/
int num = 3;
for(i=0;i<9;i++){
    printf("%d ",num);
    if((i+1)%3==0){
        num+=5;
    }
    else{
        num+=2;
    }
}


getchar();

}
