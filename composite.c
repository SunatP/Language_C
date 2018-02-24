#include<stdio.h>
#include<math.h>

int main()
{
    const s[3];
    char c,a;
    float x,h,g,f,y;
    printf("Input Composite F(x)[gof, hoh]: ");
    scanf("%c",&s[a]);
    switch(a)
    {
    case 'gof' :
        {
        printf("input number : ");
        scanf("%f",&x);
       f = (x*x)+(2*x)-5;
        g = pow(x,3)-(9*x)-1;
        y = g*f;
        printf("%f",y);
        break;
            }
        case 'h' :
{
        printf("input number : ");
        scanf("%f",&g);
        h = ((2*(g*g)+g)-12);
        y = h*h;
        printf("%f",y);
            }
    }

    }




