#include <stdio.h>
#include <string.h>

int main(){
    char a[] = "When the Going gets tough, the tough stay put!";
    char check[20];
    scanf("%[^\n]",check);
    int i,j,is;
    int cnt = 0;
    for(i = 0;i<strlen(a);i++){
        is = 1;
        for(j = 0;j<strlen(check);j++){
            if(a[i+j] != check[j]) is = 0;
            if(is == 0) break;
        }
        if(is == 1)cnt ++;
    }
    printf("%s\n",check);
    printf("%d",cnt);
}




