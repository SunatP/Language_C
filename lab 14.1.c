#include<stdio.h>

struct Student
{
    int idnum;
    int credit;
    double grade;
};
struct Student2
{
    char Sname[25];
    char Lname[25];
    char birth[25];
    int credits;
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
    double price;
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
   struct Stemp chk  = {  {"4672",68,3.01},
                            {"Manee","Deejai","8/4/1980",96,3.89},
                            {"Mana","Klahan","4 Road Salaya","Putthamonthon","Thailand","73170"},
                            {"ICT stock",134.5,"10/1/2010"}
    };
    printf("Identification Number: %d\n",chk.A.idnum);
    printf("Number of Credits Completed: %d\n",chk.A.credit);
    printf("Grade Point Average: %.2lf\n",chk.A.grade);
    printf("Name: %s %s \n",chk.B.Sname,chk.B.Lname);
    printf("Birth Date: %s\n",chk.B.birth);
    printf("Number of Credits Completed: %d\n",chk.B.credits);
    printf("Grade Point Average: %.2lf\n",chk.B.avg);
    printf("Name: %s %s \n",chk.C.name,chk.C.lname);
    printf("Street Address: %s\n",chk.C.streetads);
    printf("City: %s\n",chk.C.city);
    printf("Country: %s\n",chk.C.country);
    printf("Zip Code: %s\n",chk.C.zipcode);
    printf("Stock Name: %s\n",chk.D.stkname);
    printf("Stock Price: %.1lf\n",chk.D.price);
    printf("Date Purchased: %s",chk.D.datepurchase);
    return 0 ;


   /* struct Stemp chk;
    chk.A.idnum = 4672;
    chk.A.credit = 68;
    chk.A.grade = 3.01;
    chk.B.Sname[25] = "Manee";
    chk.B.Lname[25] = "Deejai";
    chk.B.birth[25] = "8/4/1980";
    chk.B.credits = 96;
    chk.B.avg = 3.89;
    chk.C.name[25] = "Mana klahan";
    chk.C.streetads[25] = "4 Road Salaya";
    chk.C.city[25] = "Phutthamonthon";
    chk.C.country[25] = "Thailand";
    chk.C.zipcode[25] = "73170";
    chk.D.stkname[25] = "ICT stock";
    chk.D.price = 134.5 ;
    chk.D.datepurchase[25] = "10/1/2010";
    printf("Identification Number: %d\n",chk.A.idnum);
    printf("Number of Credits Completed: %d\n",chk.A.credit);
    printf("Grade Point Average: %.2lf\n",chk.A.grade);
    printf("Name: %s ",chk.B.Sname);*/

}

