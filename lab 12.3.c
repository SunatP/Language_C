#include<stdio.h>
int num[5];

void sort(int num[])
{
    int i,j;
    int temp=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<(5-i-1);j++)
        {
            if(num[j]>num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
        for(i=0;i<5;i++)
        {
        printf("%d ",num[i]);
        }
}
int main ()
{
    int i;
    for(i=0;i<5;i++)
    {
    scanf("%d",&num[i]);
    }
    sort(num);
}


