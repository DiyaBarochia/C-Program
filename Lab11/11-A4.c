#include<stdio.h>
void main()
{
	int i,x,y,ans=1;	
	printf("Enter the value power:",y);
	scanf("%d",&y);
	printf("\nEnter the value base:",x);
	scanf("%d",&x);
	for(i=1;i<=y;i++)
	{
		ans=ans*x;
	}
	printf("Ans is:%d",ans);
}
