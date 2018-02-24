#include<stdio.h>

int main()
{
    int quiz,mid,final,sum,cond;
    cond = 1;
    scanf("%d %d %d",&quiz,&mid,&final);
    sum = quiz + mid + final;
    if(quiz <0 && mid <0 && final <0 )
    {
        printf("Score Is Invalid");
        cond = 0 ;
    }
    else if(quiz >30 )
    {
        printf("the quiz score should less than or equal to 30");
        cond = 0 ;
    }
    else if (mid >35)
    {
        printf("the midterm score should less than or equal to 35");
        cond = 0 ;
    }
    else if (final >35)
    {
        printf("the final score should less than or equal to 35");
        cond = 0 ;
    }

    if(cond == 1 )
    {
        if(sum >=90 ) printf("A");
        else if(sum>=80 &&sum < 90) printf("B");
        else if(sum>=70 &&sum < 80) printf("C");
        else if(sum>=60 &&sum < 70) printf("D");
        else printf("F");
    }
}