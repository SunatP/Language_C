#include<stdio.h>
#include<math.h>
main()
{
    int a,b;
    scanf("%d",&a);
    double c[a][2];
    for(b=0;b<a;b++)
    {
        scanf("%lf",&c[b][1]);
        c[b][2]=pow(c[b][1],2);
    }
    for(b=0;b<a;b++)
    {
        printf("%.2f * %.2f = %f\n",c[b][1],c[b][1],c[b][2]);

    }
}
