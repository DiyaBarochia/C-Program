#include<stdio.h>
void main()
{
	int i,n,a=0,b=1,ans=0;
	printf("Enter the terms you want to print in Fibonacci series:",n);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",a);
		ans=a+b;
		a=b;
		b=ans;
	}
}
