#include<stdio.h>

int main()
{
    int a[10],b,c,d,e;
    for(b=0;b<10;b++)
    {
        scanf("%d",&a[b]);
    }
    for(b=0;b<10;b++)
    {
        d=999;
            for(c=0;c<10;c++)
            {
                if(a[c]<d)
                {
                d=a[c];
                e=c;
                }
            }

        printf("%d ",d);
        a[e] = 999;
    }
    return 0;

}
