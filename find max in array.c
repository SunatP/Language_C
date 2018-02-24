#include<stdio.h>


int main()
{
    int arr[5] = {2,3,4,5,6};
    int i,j ,k =0;
    for(i=0;i<5;i++)
    {
        if(arr[i]>k)
            k = arr[i];
        else printf("%d ",k);
    }

 printf("%d ",k);
        printf("\t");
        return 0 ;
}

