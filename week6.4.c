#include<stdio.h>

int main()
{
    int arr[10];
    int size, i,min,max;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for(i=1;i<size;i++)
    {
        if(arr[i]>max) max = arr[i];

        if(arr[i]<min) min = arr[i];

        }
    printf("max is %d\n",max);
    printf("min is %d",min);
    return 0;
}