#include<stdio.h>
void main()
{
	int i,n,nc=0,a[n];
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
		nc++;
	}
	printf("total negative elements are=%d",nc);
}
