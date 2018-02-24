#include<stdio.h>
#define pi 3.1416
#define g 32.2
int main()
{
    float length,time;
    scanf("%f",&time);
    length = g*pow(time/(2*pi),2);
    printf("%f",length*12);
}