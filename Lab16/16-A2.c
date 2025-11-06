#include<stdio.h>
void main()
{
	int i,j,a[3][3],pc=0,nc=0,zero=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter array element:");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>0)
			pc++;
			else if(a[i][j]<0)
			nc++;
			else
			zero++;
		}
	}
	printf("pc=%d",pc);
	printf("\nnc=%d",nc);
	printf("\nzero=%d",zero);
}
