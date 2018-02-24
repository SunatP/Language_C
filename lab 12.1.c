#include<stdio.h>

int main ()
{
    char samtest[16] = {"This is a sample"};
    char *ptest;

    ptest = &samtest[0];
    int i = 0;
    for(i=0;i<16;i++)printf("%c",*(ptest+i));
}
