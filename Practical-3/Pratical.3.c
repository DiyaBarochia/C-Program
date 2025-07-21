#include<stdio.h>
// This program is about how BMI works (pratical 3)
int main()
{
    float height,weight,BMI;
    printf("Enter your height(in meter)");
    scanf("%f",&height);
    printf("Enter your weight(in kilogram)");
    scanf("%f",&weight);
    BMI=weight/(height*height);
    printf("Your BMI is %f",BMI);
    printf("\nThis pratical is developed by Diya Barochia");
}
