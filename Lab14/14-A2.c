#include<stdio.h>
void main()
{
	int i,n,a[n],pc=0,nc=0;
	printf("Enter size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter array element:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		pc++;
		else
		nc++;
	}
	printf("positive numbers are=%d",pc);
	printf("negative numbers are=%d",nc);
}
