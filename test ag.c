#include<stdio.h>
#include<math.h>
float function(float d)
{
    d = 1.5;
    d = (((2*pow(d,2))+d-12)*((2*pow(d,2))+d-12));
    return d;
}
int main()
{
    float a = 1,h = 1.5 ;
    a = function(a);
    h = function(h);
    printf("%lf\n",function(a));
    printf("%lf",function(h));

}
