#include<stdio.h>
int x;
float y;
double z;

int check(int x, float y ,double z)
{
    printf("int is %d\n",x);
    printf("float is %f\n",y);
    printf("double is %lf\n",z);
}
int main()
{
    printf("Enter an integer : ");
    scanf("%d",&x);
    printf("Enter a floating number : ");
    scanf("%f",&y);
    printf("Enter a double precision number : ");
    scanf("%lf",&z);
    return check(x,y,z);
}
