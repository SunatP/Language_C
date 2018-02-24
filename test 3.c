#include<stdio.h>
main()
{
    int b,c;
    float a[4][4],d;
    for(b=0;b<4;b++)
    {
        for(c=0;c<4;c++)
        {
            scanf("%f",&a[b][c]);
        }
    }
    for(b=0;b<4;b++)
    {
        d=0;
        for(c=0;c<4;c++)
        {
            if(a[b][c]>d) d=a[b][c];
        }
        printf("Row%d: %.2f\n",b+1,d);
    }
    for(c=0;c<4;c++)
    {
        d=999999;
        for(b=0;b<4;b++)
        {
            if(a[b][c]<d) d=a[b][c];
        }
        printf("Column%d: %.2f\n",c+1,d);
    }
  return 0;

}
