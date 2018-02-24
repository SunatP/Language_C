#include <stdio.h>
int main() {
    int price[11],quantity[11],amount[11],i;
    for(i=0;i<10;i++){
            printf("input price: ");
            scanf("%d",&price[i]);
            printf("input quantity: ");
            scanf("%d ",&quantity[i]);
        amount[i] = price[i]*quantity[i];
    }
    if(price[11] != NULL){
        printf("ERROR\n");
        printf("Price\t|\tQuantity\t|\tValue\n");
        for(i=0;i<10;i++){
            printf("  %d\t|\t   %d\t\t|\t   %d\n",price[i],quantity[i],amount[i]);
        }

    }
    else{
        printf("Price\t|\tQuantity\t|\tValue\n");
        for(i=0;i<10;i++){
            printf("  %d\t|\t   %d\t\t|\t   %d\n",price[i],quantity[i],amount[i]);
        }
    }
}
