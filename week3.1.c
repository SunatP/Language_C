#include<stdio.h>

int main()
{
    char signal;
    printf("Input your signal light: ");
    scanf("%c",&signal);
    switch(signal){
    case 'R' :
    {
        printf("Red\n");
        printf("Stop! ");
        break ;

    }
    case 'Y':{
    printf("Yellow\n");
    printf("Slow down! ");
    break ;
    }
    case 'G' :{

        printf("Green\n");
        printf("Go ");
        break ;
    }
    default : printf("Invalid Input");
}
return 0;

}