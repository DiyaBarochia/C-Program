#include<stdio.h>
int main()
{
    int i,j,N=9;
    for(i=1;i<=N;i++)
    {
        printf("%d",i);
    }
    printf("\n");
    for(i=2;i<=5;i++)
    {
        for(j=1;j<=N;j++)
        {
          if(j==i || j==(N-i+1))
         {
           printf("%d",j);
         }
         else
         {
             printf(" ");
         }
        }
        printf("\n");
    }
    return 0;
}
