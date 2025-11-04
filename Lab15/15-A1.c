#include<stdio.h>
void main()
{
	int i, a[5],b[5];
	for(i=0;i<5;i++)
	{
		printf("Enter elments:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
    {
		b[i]=a[i];
	}
	for(i=0;i<5;i++)
	{
		printf("elements are:%d",b[i]);
	}
}
