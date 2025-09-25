#include<stdio.h>
void main()
{
	int n,x;
	printf("Enter the value:");
	scanf("%d",&n);
	x=n%10;
	if(x%2==0)
	{
		printf("The last digit of entered value is even.");
	}
	else
	{
		printf("The last digit of entered value is odd.");
	}
}
