#include<stdio.h>
#include<math.h>
int a ,b ,Sum;
int num()
{
    scanf("%d %d",&a,&b);
    Sum = a+b;
    return Sum;
}
int main()
{
    num();
    printf(" %d ",Sum);
    return 0 ;

}


