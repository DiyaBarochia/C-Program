#include<stdio.h>
void main()
{
	int i,n,ans=0;
	printf("Enter the value n:",n);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ans+=i;
	}
	printf("Sum of numbers is:%d",ans);	
}
