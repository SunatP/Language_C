#include <stdio.h>
#include<math.h>

int main()
{
    int start, stop , increment,num;
    printf("Starting number : ");
    scanf("%d",&start);
    printf("Stopping number : ");
    scanf("%d",&stop);
    printf("Increment number : ");
    scanf("%d",&increment);
    num = start;
    do
    {
      printf("%d\t", num);
      num = num + increment;
    }
    while(num<=stop);
}
