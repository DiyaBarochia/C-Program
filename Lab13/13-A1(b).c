#include<stdio.h>
void main()
{
	int i,j,n=5,x=0;
	for(i=1;i<=n;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d",x=n-j+1);
		}
		printf("\n");
	}
}
