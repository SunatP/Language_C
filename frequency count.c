#include <stdio.h>

int main()
{
    int input[9] = {};
    int freq [9] = {};
    int count , i ,j ;
    for(i=0;i<9;i++)
    {
         scanf("%d",&input[i]);
         freq[i] = -1;
    }
    for(i=0 ; i<9; i++)
    {
        count = 1;
        for(j=i+1;j<9;j++)
        {
            if(input[i]==input[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i]!=0)
        {

            freq[i] = count;
        }
    }
    for(i=0; i<9; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d: %d \n", input[i], freq[i]);
        }
    }

    return 0;
}
