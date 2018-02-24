#include<stdio.h>
#include<math.h>
float function(float x)
{
    x = 1 ;
    x = ((x*x)+(2*x)-5);
    x = (pow(x,3)-(9*x)-1);
    return x;
}
float function(float d)
{
    d = 1.5;
    d = (2*pow(d,2))+d-12;
    d = d * d;
    return d;
}
int main()
{
    float a = 1,h = 1.5 ;
    a = function(a);
    h = function(h);
    printf("%lf",function(h));

}
