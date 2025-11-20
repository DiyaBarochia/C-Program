#include<stdio.h>
struct book
{
	char Name[50], author[20], publication[50];
	float price;
};
void main()
{
	int i;
	struct book b[3];
	for(i=0;i<3;i++)
	{
		printf("Enter book name:");
		gets(b[i].Name);
		printf("Enter it's author:");
		gets(b[i].author);
		printf("Enter it's publication:");
		gets(b[i].publication);
		printf("Enter price:");
		scanf("%f",&b[i].price);
		getchar();
	}
	for(i=0;i<3;i++)
	{
		printf("\nBook name is %s",b[i].Name);
		printf("\nIt's author is %s",b[i].author);
		printf("\nIt's publication is %s",b[i].publication);
		printf("\nIt's price is %f",b[i].price);
	}
}
