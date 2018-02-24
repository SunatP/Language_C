#include<stdio.h>
#include<math.h>
double x1,y,y2,x2;
double sum;
int distance(double x1 , double y, double x2,double y2)
{
    sum = sqrt(pow(x2-x1,2)+(y2-y,2));
    return sum;
}
int main()
{

    printf("Please enter a value for x1 : ");
    scanf("%f",&x1);
    printf("Please enter a value for x2 : ");
    scanf("%f",&y);
    printf("Please enter a value for y1 : ");
    scanf("%f",&x2);
    printf("Please enter a value for y2 : ");
    scanf("%f",&y2);
    distance(x1,y,x2,y2);
        printf("The distance between the point is %f",sum);

}
