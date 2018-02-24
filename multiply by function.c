#include<stdio.h>

int Mcross(int a , int b)
{
    int Trash;
    Trash = a*b;
    printf("%d Multiply by %d equal to %d",a,b,Trash);
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    Mcross(x,y);
}




/*int main()
{
    int a, b,sum;
    printf("First num : ");
    scanf("%d",&a);
    printf("Second num : ");
    scanf("%d,",&b);
    sum = a*b;
    printf("%d multiply by %d is equal to %d ",a,b,sum);

}*/
