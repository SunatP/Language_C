#include <stdio.h>

int main (){
    double input[500],s=0,sum=0;
    int index=0;
    while (1){
        printf("Input Number: ");
        scanf("%lf",&s);
        if(s<0) break;
        input[index++] = s;
        sum = sum+s;
    }
    printf("%f\n",sum/index);
}
