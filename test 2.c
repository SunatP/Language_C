#include<stdio.h>
main()
{
    char d;
    int b,c,e,f;
    scanf("%d %d",&b,&c);
    float a[b][c],g=0.0;
    for(e=0;e<b;e++)
    {
        for(f=0;f<c;f++)
        {
            scanf("%f",&a[e][f]);
        }
    }
    do{
    scanf(" %c",&d);
    }while(d!='r'&&d!='c');
    scanf("%d",&e);
    if(d=='r'){
        for(f=0;f<c;f++)
        {
            g+=a[e-1][f];
        }
    }
    else if(d=='c'){
        for(f=0;f<b;f++)
        {
            g+=a[f][e-1];
        }
    }
    printf("%5.2f",g);
  return 0;
}
