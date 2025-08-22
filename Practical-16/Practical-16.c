#include<stdio.h>
int main()
{
    int MS=21,user,comp;
    printf("There are total 21 matchsticks MS.");
    printf("\nYou can only choose from 1 to 4 matchsticks.");
    while(MS>1)
    {
        if(MS>=1 || MS<=4)
       {
        printf("It's users turn.\n");
        printf("\nChoose the number of MS.");
        scanf("%d",&user);
        printf("\nThe number of MS chosen: %d",user);
        comp=5-user;
        MS-=user;
        MS-=comp;
        printf("\nThe computer choose: %d",comp);
       }
        else
        {
            printf("Invalid number choosen.");
        }
        if(MS==1)
        {
            printf("\nOnly one matchstick is left.");
            printf("Computer wins.");
        }
        }
    }

