#include<stdio.h>

int main()
{
    int num1,m,o,n;
    printf("Input Your money : ");
    scanf("%d",&num1);
    printf("%d\n",num1);

    m = num1/1000;
    num1 = num1 -(m*1000);
    o = num1/500;
    num1 = num1 -(o*500);
    n = num1/100; 
    num1 = num1 - (n*100);
    if(num1<0)
    {
        printf("No\n");
        printf("Invalid Ja");
        return 0;
    }
    if(num1>0 && num1 < 100)
    {

        printf("Cannot change your money");
        return 0;
    }
    printf("Yes\n");
    printf("Bank 1000 : %d\n",m);
    printf("Bank 500  : %d\n",o);
    printf("Bank 100  : %d\n",n);
    return 0;
}