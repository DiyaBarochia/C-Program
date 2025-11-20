#include<stdio.h>
struct emp
{
	char eName[20];
	int id;
	float salary;
};
void main()
{
	struct emp e;
	printf("Enter employee name:");
	scanf("%s",e.eName);
	printf("Enter id:");
	scanf("%d",&e.id);
	printf("Enter salary:");
	scanf("%f",&e.salary);
	printf("\nEmployee name is %s",e.eName);
	printf("\nid= %d",e.id);
	printf("\nsalary is %f",e.salary);
}
