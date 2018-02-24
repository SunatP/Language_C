#include<stdio.h>

int main()
{
    char c;
    int num1,num2,sum,kilo,mile;
    printf("Input that distance you want(k/m): ");
    scanf("%c",&c);
    switch(c)
    {
        case 'm' :
        {
            printf("Length : ");
            scanf("%d",&mile);
            kilo = ((mile*5)/8);
            sum = kilo;
            printf("%d miles = %d kilo",mile,sum);
            break ;
        }
        case 'k' :
        {
            printf("Length : ");
            scanf("%d",&kilo);
            mile= (kilo*8)/5;
            sum = mile;
            printf("%d kilo = %d mile",kilo,sum);
            break ;
        }
        default : printf("error");
    }
}