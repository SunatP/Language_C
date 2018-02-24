#include<stdio.h>
#include<string.h>
void reverse(char naw[])
{
    int a;
    for(a=strlen(naw)-1;a>=0;a--){
        printf("%c",naw[a]);
    }

}
int main()
{
    char chawna[100];
    scanf("%[^\n]",chawna);
    reverse(chawna);

}
