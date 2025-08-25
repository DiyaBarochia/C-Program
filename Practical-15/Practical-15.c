#include<stdio.h>
int main()
{
    int sec;
    printf("Enter the number of secs to set timer.");
    scanf("%d",&sec);
    if(sec>=0)
    {
        while(sec>=0)
        {
            printf("%d\a\n",sec);
            sec--;
            sleep(1);
        }
    printf("Countdown completed.");
    }
    else
    {
        printf("Please enter the non negative number.");
    }
           }
