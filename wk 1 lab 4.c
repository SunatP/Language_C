#include<stdio.h>

int main()
{
    float num1;
    scanf("%f",&num1);
    printf("Fourth root of %lf = %lf",num1,sqrt(sqrt(num1)));
    return 0;
}
