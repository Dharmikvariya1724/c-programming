#include<stdio.h>

void main(){

    // int battery = 14 ;

    // printf("Enter Your bettery level :");
    // scanf("%d", &battery);

    // if(battery<20){
    //     printf("Your battry level Is %d pls Charge Your Phone", battery); 
    // }else{
    //     printf("your phone in battry level is Good :)");
    // }

/*
    int isRainng = 1;

    if (isRainng == 1)  
    {
        printf("Take an Umbrella and Raincort \n");
    }else{
        printf("Wather is clear!! Enjoy Your day :)");
    }
    */

    /*

    // Useer input in Temprtecher
    int temp;
    printf("Enter a Temprecher in Your City's :");
    scanf("%d", &temp);

    // just Menually
    // int temp = 15;

    if(temp>=40){
        printf("Temprecher Very Hot : \n");
    }else if (temp>=25)
    {
        printf("wether is normal \n");
    }else if (temp >= 10)
    {
        printf("Temprecher is Cold Outside");
    }else{
        printf("It's Freezing Weather \n");
    }
    */


    int cardValidity;
    int cardpin;
    int balance = 9000;
    int withdrawalAmount;


    printf("Enter Card Expaiery date :");
    scanf("%d", &cardValidity);

    if (cardValidity>=25 && cardValidity<=29)
    {
        printf("Enter a Card Pin No:");
        scanf("%d", &cardpin);
        if (cardpin==1724){

            printf("Enter a Withdwow amount :");
            scanf("%d", &withdrawalAmount);

            if (balance>=withdrawalAmount)
            {
                printf("Withdrwal SuccessFully :)");
            }else{
                printf("low balenss");
            }                
        }else{
            printf("Wrong Card pin!!");
        }
    }else{
        printf("Invalid Card!!");
    }
    
}