#include<stdio.h>
int main()
{
    int rows,columns,n=1,m=1;
Ask:
    printf("\nEnter the size of table vertically:");
    scanf("%d",&rows);
    printf("\nEnter the size of table horizontally:");
    scanf("%d",&columns);
    if(n<0 && m<0)
    {
        printf("\nInvalid input.");
        goto Ask;
    }
    else
    {
        printf("\nMultiplication is :\n");
        for(n=1; n<=rows; n++)
        {
            for(m=1; m<=columns; m++)
            {
                printf("\t%d",n*m);
            }
            printf("\n");
        }
    }
    return 0;
}
