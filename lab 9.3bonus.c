j#include<stdio.h>

int main()
{
    int a,b,size,x,y,s=4;
    printf("Input x and y number : ");
    scanf("%d %d",&y,&x);
    int arr[y][x];  //�Ѻ��� �������ŧ array
    if(x!=y) printf("Symmetric matrix must be a square matrix");
    else
    {
        for(a=0;a<y;a++) //array �Ƿ�� y
        {
            for(b=0;b<x;b++) // array �Ƿ�� x
            {
                printf("Enter element %d,%d: ",a+1,b+1);
                scanf("%d",&arr[a][b]);
            }
        }
        for(a=0;a<y;a++) //���˹觷�� a
        {
            for(b=0;b<x;b++) // ���˹觷�� b
            {
                if(arr[a][b] != arr[b][a]) //��Ǩ�ͺ���˹觢ͧ matrix transpose
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
