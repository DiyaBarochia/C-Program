#include<stdio.h>
void compare(int a, int b);
void main()
{
	int a, b;
	printf("Enter a and b");
	scanf("%d %d",&a,&b);
	compare(a,b);
}
void compare(int a, int b)
{
	int max=(a>b)?a:b;
	printf("Maximum value is %d",max);
	int min=(a<b)?a:b;
	printf("\nMinimum value is %d",min);
}
