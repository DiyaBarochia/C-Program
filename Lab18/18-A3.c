#include<stdio.h>
float SI(float p,float r,float t);
void main()
{
	float r,t,p;
	printf("enter p,r and t:");
//	printf("\nr=");
//	printf("\nt=");
	scanf("%f %f %f",&p,&r,&t);
	float si=SI(p,r,t); 
	printf("Simple Interest is %f",si);
}
float SI(float p,float r,float t)
{
	float SI=(p*r*t)/100.0;
	return SI;
}
