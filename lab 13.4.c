#include<stdio.h>
#include<string.h>

int main()
{
    char test[50];
    int a,b;
    scanf("%[^\n]",test);
    printf("%d\n",strlen(test));
    printf("%s",strupr(test));
    return 0;
}
