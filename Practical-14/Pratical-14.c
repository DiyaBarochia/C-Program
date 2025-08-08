#include<stdio.h>
int main ()
{
    int choice;
    float withdraw_amount, total_amount=5000;
    label1:
    printf("\nEnter 1 for withdrawal or 2 for exit.");
    scanf("%d",&choice);
    while(1)
        switch(choice)
        {
        case 1:
            printf("\nEnter the amount you want to withdraw.");
            scanf("%f",&withdraw_amount);
            if(withdraw_amount<=total_amount)
            {
                total_amount-=withdraw_amount;
                printf("Now your total balance is: %f",total_amount);
                goto label1;
            }
            else
            {
                printf("Your balance is insufficient.");
            }
        case 2:
            return 1;
        }
        printf("\nThis program is developed by Diya Barochia.");
}
