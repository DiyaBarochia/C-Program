#include<stdio.h>
void sum(int a ,int b);
void main()
{
	int a,b;
	printf("Enter a and b");
	scanf("%d %d",&a,&b);
	sum(a,b);
}
void sum(int a, int b)
{
	int add=a+b;
	printf("%d",add);
}
