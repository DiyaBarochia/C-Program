#include<stdio.h>
int main()
{
    int marks,grade;
    printf("Enter your marks:",marks);
    scanf("%d",&marks);
    if(marks<0||marks>100)
    {
        printf("Invalid number.");
    }
    else
    {
        (marks>=90) ? printf("Grade A") :(marks<90 && marks>=80) ? printf("Grade B"): (marks<80 && marks>=70) ? printf("Grade C"):(marks<70 && marks>=60)?
        printf("Grade D"): printf("Grade F");
    }
}
