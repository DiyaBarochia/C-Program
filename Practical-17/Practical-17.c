#include<stdio.h>
int main()
{
    int minute=0;
    float distance=0.0;
    while(1)
    {
    minute++;
    distance+=0.5;
    printf("\nMinute %d; Distance covered =%.2f km",minute,distance);
    if (distance>=10.0)
        {
            printf("\nMarathon is completed.");
            break;
        }
    }
    return 0;
}
