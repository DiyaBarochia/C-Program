#include<stdio.h>
void main()
{
	int n;
	printf("Enter how many numbers:");
	scanf("%d",&n);
	int i,flag=0,a[n],no;
	for(i=0;i<n;i++)
	{
		printf("\nEnter elements:");
		scanf("%d",&a[i]);
	}
	printf("Enter number you want to search");
	scanf("%d",&no);
	for(i=0;i<n;i++)
	{
		if(a[i]==no)
		{
			printf("The no. is present.");
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("The no. is not present.");
}
