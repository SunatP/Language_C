#include<stdio.h>
int Velocity,  time , distance;
int computeDistance()
{
    scanf("%d %d",&Velocity,&time);
    distance = Velocity*time;
    return distance;
}
int main()
{
    computeDistance();
    printf("%d",distance);
}
