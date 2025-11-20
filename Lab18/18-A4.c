#include<stdio.h>
float compare(float a,float b,float c);
void main()
{
	float a,b,c;
	printf("Enter a ,b ,c");
	scanf("%f %f %f",&a,&b,&c);
	float max=compare(a,b,c);
	printf("Maximum value is %f",max);
}
float compare(float a,float b,float c)
{
	float max=(a>b)?(a>c)?a:c:(b>c)?b:c;
	return max;
}
