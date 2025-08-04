#include<stdio.h>
#define ticket 500
void main ()
{
    int age,adult,discount,ticketprice;
    printf("Welcome to Sunrise Amusement Park.");
    printf("\nEnter your age:");
    scanf("%d",&age);
    if(age<=12 & age>0)
    {
    printf("\nThe entry is free into the park.");
    }
    else if(age>12 & age<60)
    {
     printf("\nYou are adult.");
     printf("\nThe cost per person is: %d",ticket);
     printf("\nEnter the total no. of adult:");
     scanf("%d",&adult);

    if(adult=5)
    {
    printf("You are eligible for discount");
    discount= (ticket*adult*10)/100;
    ticketprice=(adult*ticket)-discount;

    printf("\nadults ticket price: %d",ticketprice);
    }
    else
    {
    printf("No discount is applied.");
    }
    }
    else if(age>60)
    {
    printf("you are allowed for senior citizen free entry.");
    }
    printf("\nThis program is done by Diya Barochia.");
    }

