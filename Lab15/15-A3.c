#include<stdio.h>
void main()
{
	int i,n,count=0,a[n];
	printf("Enter how many numbers:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter elements:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%3==0)
		count++;
	}
	printf("total elements div by 3 are=%d",count);
}
