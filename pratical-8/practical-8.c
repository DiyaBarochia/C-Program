#include<stdio.h>
void main()
{
    int age;
    printf("Please enter your current age:",age);
    scanf("%d",&age);
    if(age<18 & age>=0)
    {
    printf("You are not eligible to open an saving account.");
    }
    else if(age>=18 & age<60)
    {
    printf("\nYou are eligible for regular savings.");
    }
    else if(age>60)
    {
    printf("\nYou are eligible for senior citizen account.");
    }
    else if(age<0)
    {
    printf("Enter the valid age.");
    }
    printf("\nThis program is done by Diya Barochia.");
}
