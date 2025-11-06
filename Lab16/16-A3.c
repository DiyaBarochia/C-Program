#include<stdio.h>
void main()
{
	int i,j,rn,marks,a[2][21];
	for(i=0;i<1;i++)
	{
		for(j=1;j<21;j++)
		{
			printf("Enter Roll no.");
			scanf("   %d",&a[i][j]);
		}
	}
	for(i=1;i<2;i++)
	{
		for(j=1;j<21;j++)
		{
			printf("Enter Marks");
			scanf("  %d",&a[i][j]);
		}
	}
	for(i=0;i<1;i++)
	{
		for(j=1;j<21;j++)
		{
			printf("   %d",a[i][j]);
		}
	printf("\n");
	}
	for(i=1;i<2;i++)
	{
		for(j=1;j<21;j++)
		{
			printf("  %d",a[i][j]);
		}
	printf("\n");
	}
}
