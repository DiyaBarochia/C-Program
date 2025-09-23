#include<stdio.h>
void main()
{
	int i=1,x,y,ans=1;
	printf("The value of number and it's powers is:");
	scanf("%d %d",&x,&y);
	while(i<=y)
	{
		ans=ans*x;
		i++;
	}
		printf("ans is:%d",ans);
}
