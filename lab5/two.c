#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value",a,b);
	scanf("%d %d",&a ,&b);
	c=a;
	a=b;
	b=c;
	printf("the value of a:%d",a);
	printf("\nThe value of b: %d",b);
}
