#include<stdio.h>
#include<math.h>
double x,y,z,sum;

int gof(double x)
{
    y = (pow(x,2)+(2*x))-5;
    sum = (pow(y,3)-(9*y)-1);
    printf("the value of gof function is %f\n",sum);
    return 0 ;
}
int hoh(double x)
{
    y = (2*pow(x,2)+x)-12;
    sum = (2*pow(y,2)+y)-12;
    printf("the value of hoh function is %f\n",sum);
    return 0;
}

int main()
{

    int num;
    char alpha;
    printf("Input Composite F(x)[gof, hoh]: ");
    scanf("%d",&num); // ตัวเช็คฟังก์ชันเข้า switch case

    switch(num)
    {
        if(num == 1)
        {
        case 1 :
            {
                printf("This is a Composite function of gof\n");
                printf("Input the value of f(x) : ");
                scanf("%lf",&x);
                scanf("%c = EOF!");

                gof(x);
                return main();

            }
        }
        if(num == 2)
        {
        case 2 :
            {
                printf("This is a Composite function hoh\n");
                printf("Input the value of f(x) : ");
                scanf("%lf",&x);
                hoh(x);
                break ;
            }
        }
        else return 0;
}
}

