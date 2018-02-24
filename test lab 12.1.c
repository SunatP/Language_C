#include<stdio.h>

int main()
{
    char samtest[16] = {"This is a Sample"};
    char *test;
    test = &samtest[0];
    int i = 0;
    i = test;
    for(i=0;i<16;i++)
    {
        printf("%c",*(test+i));
    }
}
