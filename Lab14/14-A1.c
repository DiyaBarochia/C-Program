#include<stdio.h>
void main()
{
	int n,i,arr[n];
	printf("Enter size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the value of array element:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n\n");
	
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}                                        
