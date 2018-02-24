#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,num,space,star;
    scanf("%d",&num);
    for(i=1 ;i<=2*num - 1; i++ )
    {
        space = abs(num-i);
        star = 2*(num - abs(num- i)) - 1;
        for (j = 1 ; j<=space;j++) printf(" ");
        for (j = 1;  j <= star;j++) printf("*");
        printf("\n");
    }
    printf("\n");
    return 0 ;
}