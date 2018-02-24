#include<stdio.h>

struct Student
{
    char idnum[20];
    int credit;
    double grade;
};
struct Student2
{
    char name[25];
    char lname[25];
    int birth[25];
    int credit;
    double avg;
};
struct mailing
{
    char name[25];
    char lname[25];
    char streetads[25];
    char city[25];
    char country[25];
    char zipcode[25];
};
struct stkname
{
    char stkname[25];
    char stklname[25];
    char datepurchase[25];
};
struct Stemp
{
    struct Student A;
    struct Student2 B;
    struct mailing C;
    struct stkname D;
};
int main()
{
    struct Stemp chk;
    {
    //chk.A = {{"4672"},{68},{3.01}}
    chk.B = {"Manee","Deejai","8/4/1980",96,3.89};
    };

}
