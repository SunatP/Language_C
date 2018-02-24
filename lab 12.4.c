#include<stdio.h>
void sort(int *num)
{
    int i,j;
    int temp;
    for(i=0;i<5;i++) // นับลูป
    {
        for(j=0;j<(5-i-1);j++) // นับค่าและเทียบค่า
        {
            if(*(num+j)>*(num+j+1))
            {
                temp = *(num+j);
                *(num+j) = *(num+j+1);
                *(num+j+1) = temp;
            }
        }
    }

}
int main ()
{
    int num[5];
    int i;
    for(i=0;i<5;i++)
    {
    scanf("%d",&num[i]);
    }
    sort(num); //เรียกฟังก์ชันเข้ามาใช้
    for(i=0;i<5;i++)
        {
        printf("%d ",*(num+i));
        }
}



