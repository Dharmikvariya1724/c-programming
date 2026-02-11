#include<stdio.h>

void main(){

    int arr[]={10,20,30,40,50};
    int search,found=0,i;

    printf("Enter Search Element :");
    scanf("%d", &search);

    for(i=0;i<5;++i)
    {
        if(arr[i]==search)
        {
            found=1;
            break;
        }
    }
    if(found == 1)
    {
        printf("Element Found :)");
    }else{
        printf("Element Not Found :(");
    }

getchar();
}
