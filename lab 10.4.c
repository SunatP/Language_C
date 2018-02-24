#include<stdio.h>
#include<string.h>

struct student{
    int stdID ;
    char stdName[40];
    char stdSurname[40];
    char Gender;
    int age;
};

struct student mClass[]={{1,"Somchai", "Jaidee",'m', 18},{2,"Somsri", "Deejai",'f', 20},{3,"Somchoke", "Sudjai",'m',17},{4,"Somnuk", "Kidwai",'f',18},{5,"Somsak", "Meedee",'m',17}}; //mClass คือชื่อที่เอาไว้ลิงค์ กับ structure mClass[] ไม่ต้องกำหนดขนาด เพราะเมื่อใส่ข้อมูลจะกำหนดขนาดให้เลย

void listall()
{
    int a;
    printf("| ID |    Name    |   Surname   |  Gender | Age |\n");
    for(a=0;a<5;a++)
    {
    printf("|  %d |   %s   |   %s   |   %c   |   %d   |\n" ,mClass[a].stdID ,mClass[a].stdName ,mClass[a].stdSurname ,mClass[a].Gender ,mClass[a].age);
    }
}

int main()
{
    listall();
    printf("%s",mClass[1].stdSurname);//คำสั่งส่งนามสกุลคนที่1 ออกมา
}
