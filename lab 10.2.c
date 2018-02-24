#include<stdio.h>
#include<math.h>
double x1,x2,y,y2,sum;
int distance(double x1 , double x2, double y,double y2)
{
    sum = sqrt(pow(x2-x1,2)+(y2-y,2));
    return sum;
}
int main()
{
    printf("Please Enter a value for x1 : ");
    scanf("%f",&x1);
    printf("\nPlease Enter a value for x2 : ");
    scanf("%f",&x2);
    printf("\nPlease Enter a value for y1 : ");
    scanf("%f",&y);
    printf("\nPlease Enter a value for y2 : ");
    scanf("%f",&y2);
        distance(x1,x2,y,y2);
        printf("\nThe distance between the point is : %f",sum);

}
