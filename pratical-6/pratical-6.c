#include<stdio.h>
//this pratical is for temparture Fahrenheit and Celsius
int main()
{
    float Fahrenheit,Celsius;
    printf("Enter the value of Celsius :");
    scanf("%f", &Celsius);
    Fahrenheit=(Celsius*9/5.0)+32;
    printf("\n The temperature in Fahrenheit is:%.2f",Fahrenheit);
    printf("\n This program is prepared by Diya Barochia.");
}
