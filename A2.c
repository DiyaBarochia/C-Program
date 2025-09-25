#include<stdio.h>
void main()
{
	int n,HRA,DA;
	printf("Enter the basic salary:");
	scanf("%d",&n);
	if(n>=10000)
	{
		HRA=0.2*n;
		DA=0.8*n;
		printf("Gross salary:%d",n+HRA+DA);
	}
	else if(n>=20000)
	{
		HRA=0.25*n;
		DA=0.9*n;
		printf("Gross salary:%d",n+HRA+DA);	
	}
	else if(n>=30000)
	{
		HRA=0.3*n;
		DA=0.95*n;
		printf("Gross salary:%d",n+HRA+DA);	
	}
}
