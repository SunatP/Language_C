#include<stdio.h>

void extend(double a[],double b[],double c[])
{
    int i;
    for(i=0 ; i<10;i++)
    {
        c[i] = a[i]*b[i];
        printf("%.2f\n",c[i]);
    }
}
int main()
{
    double price[10] = {10.62,14.89,13.21,16.55,18.62,9347,6.58,18.32,12.15,3.98};
    double quantity[10] = {1,2,3,4,5,6,7,8,9,10};
    double amount[10];
    extend(price,quantity,amount);
}
