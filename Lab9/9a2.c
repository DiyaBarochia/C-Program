#include<stdio.h>
void main()
{
	int i=1,n,ans;
	printf("Enter the number:");
	scanf("%d",&n);
	while(i<=10)
	{
		ans=n*i;
		printf("\n %d",ans);
		i++;
	}
}
