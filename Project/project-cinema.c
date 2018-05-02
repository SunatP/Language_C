#include <stdio.h>
#include <windows.h>
#include <string.h>

    struct Movie
{
    char title[30];
    int yearMovie;
};
struct Movie Title[10] ={{"The Transporter",2002},//15
    {"Transpoter2", 2005},//11
    {"Transformers", 2007},//12
    {"Transformers : The Last Knight", 2017},//30
    {"Lost in Translation", 2003},//19
    {"Ready player one", 2018},//16
    {"Jumanji", 2018},//7
    {"Infinity Avengers Part I", 2018},//24
    {"The Matrix", 1999},//10
    {"up", 2008}};
void search()
{
    struct Movie mov;
      int i,count;
    char ti[20],cin[20],s;
    int a = 1;
    char keep[100];
     printf("Search Movie from title\n");
    printf("================================\n");
    printf("Movie ShowTime (Today)\n");
    printf("================================\n");
    printf("Please input Title for searching : ");

    scanf("%s",&ti);
    printf("=================================================================================\n");
    printf("      Title             Year        Length      ShowTime        Screen\n");
    printf("=================================================================================\n");
    for(i=0;i<10;i++)
    {
        strcpy(keep,Title[i].title);
        strcpy(cin,ti);
        if(strstr(strlwr(keep),strlwr(ti)))
        {
            printf("[%d]",i+1);

            printf(" %-15s \t%5d  \n",Title[i].title,Title[i].yearMovie);
            continue;
        }

        count++;
    }
   printf("=================================================================================\n");
    int asd,enter;
    char y,q;
    printf("What movie do you want to watch?: ");
    scanf("%d",&asd); // รับค่าเป็นตัวเลข
        printf("Select %s (Yes/No):? ",Title[asd-1].title); // เลือกหนัง
        scanf("%s",&y);
        if(y=='Y'||y =='y'){
            printf("[%s]\n",Title[asd].title);
            printf("Title: %s\n",Title[asd].title);
            printf("Year: %d", Title[asd].yearMovie);
        }
        if(y=='n' || y=='N')
            {
                printf("Return To Search And Select Again if press N program will go Main Menu? (Y/N): ");
                 scanf("%s",&q);
                if(q=='Y'||q =='y')
                {
                 system("cls");
                 search();
                }
                else {
                        while(1)
                            {
                                enter = fgetc(stdin);
                    if(enter == 0x0A) // กดปุ่ม Enter เพื่อจบการทำงาน
                    {
                        system("cls");
                    fprintf(stdout,main());
                    }
                  }
                }
            }
    }

int showtime()
{
    int i;
    float x;
    char y;
    system("cls");
    printf("[Search Movie from ShowTime]\n");
    printf("===============================\n");
    printf("Movie ShowTime (Today)\n");
    printf("===============================\n");
    printf("Please input Movie's Time for searching: ");
    scanf("%f",&x);
    if(x == 11.00)
    {
        printf("[MESSAGE]: There is no movie showing before %.2f  in the system.\n",x);
        printf("Search By Time Again?(Y/N) :");
        scanf("%s",&y);
        if(y=='y'||y=='Y')
        {
            system("cls");
            showtime();
        }
        if (y=='N'||y=='n') {
            printf("Go to Main Menu? (Y/N)");
            scanf("%s",&y);
            if(y="Y")
        {
            main();
        }
    }
    else {
        printf("[MESSAGE]: There is no movie showing before %.2f  in the system.\n",x);
        }
    }
}
int main()
{
char input;
printf("===============================\n");
printf("ICT Cinema System\n");
printf("===============================\n");
printf("[1] Search Movie (Title)\n");
printf("[2] Search Movie (Showtime)\n");
printf("[0] Exit\n");
printf("---------------------------\n");
printf("Enter the choice : ");
scanf("%c",&input);
switch(input)
{
case '1':
    {
        system("cls");
        search();
        break;
    }
case '2':
    {
        system("cls");
        showtime();
        break;
    }
case '0':
    {
        printf("Thank you Good Bye");
        break;
    }
default :
    {
        system("cls");
        main();
        break;
    }
}
}
