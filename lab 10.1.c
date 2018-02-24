#include<stdio.h>

int a;
float b;
double c;

int check(int a, float b, double c)
{
     printf("\nThe integer is : %d \n",a);
     printf("The floating number point : %f\n",b);
     printf("The double precision number is : %lf ",c);
}

int main()
{
    printf("Enter an integer : ");
     scanf("%d",&a);
    printf("Enter a floating number point : ");
     scanf("%f",&b);
    printf("Enter a double precision number : ");
    scanf("%lf",&c);
    check(a,b,c);
}
