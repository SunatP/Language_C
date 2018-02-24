#include<stdio.h>

int main()
{
    char c;
    int money,sum;
    printf("Input Char that you want to drink(O/G/C/I): ");
    scanf("%c",&c);
    switch(c)
    {
        case 'O' :
        {
            printf("Orange Juice 20 Bath \n");
            printf("Input Your money : ");
            scanf("%d",&money);
            if(money>20){
            printf("Here is an Orange Juice and your change : %d Bath",money-20);
            }
            else printf("Not enough Money");
            return 0;
            break ;
        }
        case 'G' :
        {
            printf("Grape Juice 21 Bath \n");
            printf("Input Your money : ");
            scanf("%d",&money);
            if(money>21){
            printf("Here is an Grape Juice and your change : %d Bath",money-21);
            }
            else printf("Not enough Money");
            return 0;
            break ;
        }
        case 'C' :
        {
            printf("Coconut Juice 22 Bath \n");
            printf("Input Your money : ");
            scanf("%d",&money);
            if(money>22){
            printf("Here is an Orange Juice and your change : %d Bath",money-22);
            }
            else printf("Not enough Money");
            return 0;
            break ;
        }
        case 'I' :
        {
            printf("Iced tea 18 Bath \n");
            printf("Input Your money : ");
            scanf("%d",&money);
            if(money>18){
            printf("Here is an Iced tea and your change : %d",money-18);
            }
            else printf("Not enough Money");
            return 0;
            break ;
        }
        default : printf("error");
    }
}