#include<stdio.h>
void main()
{
    int a,b;
    char c;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    printf("\n Enter the opertor:");
    scanf(" %c",&c);
    if(c=='+')
    {
        printf("Addition of a+b=%d",a+b);
    }
    else if (c=='-')
    {
        printf("Subtraction of a-b=%d",a-b);
    }
    else if(c=='*')
    {
    	printf("product of axb=%d",a*b);
	}
	else if(c=='/')
	{
		printf("Division of a/b",a/b);
	}
	else
	{
		printf("Invalid input");
	}
}
