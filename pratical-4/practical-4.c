#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    printf("The size of char is:%zu\n",sizeof(char));
    printf("\n The range of char is %d to %d\n",CHAR_MIN,CHAR_MAX);
    printf("\n The size of int is:%zu", sizeof(int));
    printf("\n The range of int is from %d to %d",INT_MAX,INT_MIN);
    printf("\n The size of unsigned int is:%zu\n",sizeof(unsigned int));
    printf("\n The range of unsigned int is from 0 to %u",UINT_MAX);
    printf("\n The size of long is:%zu", sizeof(long));
    printf("\n The range of long is from %ld to %ld",LONG_MAX,LONG_MIN);
    printf("\n The size of unsigned long is:%zu", sizeof(unsigned long));
    printf("\n The range of unsigned long is from 0 to %lu",ULONG_MAX);
    printf("\n The size of long long is:%zu", sizeof(long long));
    printf("\n The range of long long is from %lld to %lld",LLONG_MIN,LLONG_MAX);
    printf("\n The size of unsigned long long is:%zu", sizeof(unsigned long long));
    printf("\n The range of unsigned long long is from 0 to %lld",ULLONG_MAX);
    printf("\n The size of float is:%zu", sizeof(float));
    printf("\n The range of float is from %e to %e",FLT_MIN,FLT_MAX);
    printf("\n The size of double is:%zu", sizeof(double));
    printf("\n The range of double is from %e to %e",FLT_MIN,FLT_MAX);
    printf("\n The size of long double is:%zu", sizeof(long double));
    printf("\n The range of long double is from %Le to %Le",LDBL_MIN,LDBL_MAX);
}




