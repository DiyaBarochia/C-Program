#include<stdio.h>
struct student
{
	char name[20];
	float per;
	int age;
};
void main()
{
	int i;
	struct student s[5];
	for(i=0;i<5;i++)
	{
		printf("Enter name:");
		gets(s[i].name);
		printf("Enter percentage:");
		scanf("%f",&s[i].per);
		getchar();
		printf("Enter age:");
		scanf("%d",&s[i].age);
		getchar();
	}
	for(i=0;i<5;i++)
	{
		printf("\nStudent's name is %s",s[i].name);
		printf("\nPercentage is %f",s[i].per);
		printf("\nAge is %d",s[i].age);
	}
}
