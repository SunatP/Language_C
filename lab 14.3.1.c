#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include<string.h>

struct contacts{
    char fname[50];
    char lname[50];
    char phone[11];
    char email[50];
}; struct contacts a[2] = {{'\0','\0','\0','\0'},{'\0','\0','\0','\0'}};
void add(int y){

    printf("Name : ");
    scanf("%s",a[y].fname);
    printf("Last Name : ");
    scanf("%s",a[y].lname);
    printf("Phone : ");
    scanf("%s",a[y].phone);
    printf("Email : ");
    scanf("%s",a[y].email);
}
void show(int y){
    if(strcmp(a[y].fname,"0")==0){
        printf("Name = \n");
    }else{
        printf("Name = %s\n",a[y].fname);
    }
    if(strcmp(a[y].lname,"0")==0){
        printf("Last Name = \n");
    }else{
        printf("Last Name = %s\n",a[y].lname);
    }
    if(strcmp(a[y].phone,"0")==0){
        printf("Phone = \n");
    }else{
        printf("Phone number = %s\n",a[y].phone);
    }
    if(strcmp(a[y].email,"0")==0){
        printf("Email = \n");
    }else{
        printf("Email = %s\n",a[y].email);
    }
}
int main(){

    int i;
    for(i=0;i<2;i++){
        add(i);
    }
    for(i=0;i<2;i++){
        show(i);
    }
}
