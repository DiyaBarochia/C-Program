#include<stdio.h.>
void main()
{
	char c;
	printf("Enter any character:");
	scanf("%c",&c);
	if(c>='A' && c<='Z')
	{
		printf("It's upper case.");
	}
	else if (c>='a' && c<='z')
	{
		printf("It's lower case.");
	}
	else if (c>='0' && c>='9')
	{
		printf("It's a digit.");
	}
	else
	{
		printf("It's a special character.");
	}
}
