#include<stdio.h>

void MSwap(int *x , int *y)
{
    int junk;
    junk = *x;
    *x = *y;
    *y = junk;
    printf("%d %d ",*x,*y);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    MSwap(&a,&b);
}








/*int main ()
{
    int x ,y ,trash;
     scanf("%d %d",&x,&y);
    trash = x;
    x =y;
    y = trash;
    printf("%d %d",x ,y);

}*/
