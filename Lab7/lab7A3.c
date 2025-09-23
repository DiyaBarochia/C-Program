#include<stdio.h>
void main()
{
    float n1, n2, result;
	char operation;
	printf("Enter the values:");
	scanf("%f %f",&n1 ,&n2);
	printf("Enter the operation you want to perform:");
	scanf(" %c",&operation);	
	switch(operation)
	{
		case '+':
			result=n1+n2;
			printf("The result is:%f ",n1+n2);
			break;
		case '-':
			result=n1-n2;
			printf("The result is:%f",result);
			break;
		case '*':
			result=n1*n2;
			printf("The result is:%f",result);
			break;
		case '/':
			result=n1/n2;
			printf("The result is:%f",result);
			break;
		default:
			printf("Invalid input");
	}
}
