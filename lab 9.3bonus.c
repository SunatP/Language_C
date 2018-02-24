j#include<stdio.h>

int main()
{
    int a,b,size,x,y,s=4;
    printf("Input x and y number : ");
    scanf("%d %d",&y,&x);
    int arr[y][x];  //รับค่า แล้วเอาลง array
    if(x!=y) printf("Symmetric matrix must be a square matrix");
    else
    {
        for(a=0;a<y;a++) //array แถวที่ y
        {
            for(b=0;b<x;b++) // array แถวที่ x
            {
                printf("Enter element %d,%d: ",a+1,b+1);
                scanf("%d",&arr[a][b]);
            }
        }
        for(a=0;a<y;a++) //ตำแหน่งที่ a
        {
            for(b=0;b<x;b++) // ตำแหน่งที่ b
            {
                if(arr[a][b] != arr[b][a]) //ตรวจสอบตำแหน่งของ matrix transpose
                {
                    printf("The matrix is not a symmetric");
                    s=0;
                    break ;
                }
            }
            //if(s==0)printf("The matrix is a symmetric");
            break;
        }
    }
}
