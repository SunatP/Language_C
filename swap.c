#include<stdio.h>
void swap(int *a , int *b );

int main()
{
    int a,b ;
    scanf("%d",&a);
    scanf("%d",&b);

    printf("a = %d b = %d\t",a ,b);
     swap(&a,&b);
}
void swap(int *a , int *b)
{
    int temp ;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("a= %d b = %d\n",*a,*b);
}
