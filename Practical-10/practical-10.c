#include<stdio.h>
void main()
{
    int choice,total=0;
    printf("Welcome to Foodies Restaurant(established in 2020).");
    printf("\n Please select food item from the menu given below:");

    printf("\nMENU");
    printf("\n1. Burger - Rs150");
    printf("\n2. Pizza - Rs200");
    printf("\n3. Pasta - Rs120");
    printf("\n4. Sandwitch - Rs100");
    printf("\n5. French Fries - Rs80");

   menu: printf("\n Enter your selected item.");
    scanf("%d",&choice);


    switch(choice)
    {
    case 1:
        total+=150;
        printf("Burger is added to the order. Subtotal= %d",total);
        break;
    case 2:
        total+=200;
        printf("Pizza is added to the order. Subtotal= %d", total);
        break;
    case 3:
        total+=120;
        printf("Pasta is added to the order. Subtotal=%d", total);
        break;
    case 4:
        total +=100;
        printf("Sandwitch is added to the order. Subtotal =%d",total);
        break;
    case 5:
        total+= 80;
        printf("French Fries is added to the order.Subtotal =%d", total);
        break;
    case 0:
        printf("Order is completed.");
        printf("\nTotal bill =%d",total);
        break;
    default:
        printf("Order is invalid.");
    }
    if(choice!=0)
    {
    goto menu;
    }
    printf("\nThis program is developed by Diya Barochia.");
}
