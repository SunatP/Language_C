#include <stdio.h>
#include <windows.h>
#include <string.h>
#include<stdlib.h>
#include<time.h>
    struct Movie
{
    char title[50];
    int yearMovie;
    float hr;
    float min;
    float stime;
    int screen;
};
struct Movie Title[100] ={{"The Transporter",2002,1,32,10.00,1},//15
    {"Transpoter2", 2005,1,27,13.00,1},//11
    {"Transformers", 2007,2,24,10.00,2},//12
    {"The ICT Re-Exam Game", 2018,1,0,11.00,2},//30
    {"Lost in Translation", 2003,1,42,11.00,3},//19
    {"Ready player one", 2018,1,15,14.00,1},//16
    {"Jumanji", 2018,1,32,15.00,1},//7
    {"Infinity Avengers Part I", 2018,1,37,16.00,1},//24
    {"The Matrix", 1999,1,18,13.00,1},//10
    {"up", 2008,1,35,17.00,1}};
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

    printf("=================================================================================================================\n");
    printf("      Title                              Year            Length         ShowTime      Screen\n");
    printf("=================================================================================================================\n");
    for(i=0;i<10;i++)
    {
        strcpy(keep,Title[i].title);
        strcpy(cin,ti);
        if(strstr(strlwr(keep),strlwr(ti)))
        {
            printf("[%d]",i+1);

            printf(" %-35s\t%5d  \t\t%.0fh %.0fmin \t%.2f \t\t%d\n",Title[i].title,Title[i].yearMovie,Title[i].hr,Title[i].min,Title[i].stime,Title[i].screen);

        }
        count++;
    }
   printf("=================================================================================================================\n");
    int asd,enter;
    char y,q;
    printf("What movie do you want to watch?: ");
    scanf("%d",&asd); // รับค่าเป็นตัวเลข


            printf("[%s]\n",Title[asd-1].title);
            printf("Title: %s\n",Title[asd-1].title);
            printf("Year: %d\n", Title[asd-1].yearMovie);
            printf("Duration: %.0fh %.0fmin\n",Title[asd-1].hr,Title[asd-1].min);
            printf("Time: %.2f - %.2f\n",  Title[asd-1].stime,(Title[asd-1].stime+Title[asd-1].hr+(Title[asd-1].min/100)));
            printf("Screen: %d\n",Title[asd-1].screen);

        printf("Select %s (Yes/No):? ",Title[asd-1].title); // เลือกหนัง
        scanf("%s",&y);
        if(y=='Y'||y =='y'){
            Sleep(1500);
            seat();
        }
        if(y=='n' || y=='N')
            {
                printf("Return To Search And Select Again if press N and Enter program will go Main Menu? (Y/N): ");
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
                        printf("Program will go to main Menu");
                        Sleep(1500);
                        system("cls");
                    fprintf(stdout,main());
                    }
                  }
                }
            }
    }
int seat()
{
    int i,j,k;
    int xx;
    char r,c;
    float x;
    char y;
    char board[4][10] = {
         {'O','O','O','O','O','O','O','O','O','O'},
         {'O','X','O','O','O','X','O','O','O','O'},
         {'O','O','O','O','O','O','O','X','X','O'},
         {'O','O','O','O','X','X','O','O','O','O'}};
    printf("===============================\n");
    printf("Available Seat\n");
    printf("===============================\n");
    printf("Row a: ");
    for( i = 0; i<1; i++)
    {
        for(j=0;j<10;j++)
        {
            printf("|%c",board[i][j]);
        }
        printf("|");
    }
    printf("\nRow b: ");
    for( i = 1; i<2; i++)
    {
        for(j=0;j<10;j++)
        {
            printf("|%c",board[i][j]);
        }
        printf("|");
    }
    printf("\nRow c: ");
    for( i = 2; i<3; i++)
    {
        for(j=0;j<10;j++)
        {
            printf("|%c",board[i][j]);
        }
        printf("|");
    }
     printf("\nRow d: ");
    for( i = 3; i<4; i++)
    {
        for(j=0;j<10;j++)
        {
            printf("|%c",board[i][j]);
        }
        printf("|");
    }

          printf("\nHow many tickets do you want to buy? ");
          scanf("%d", &k);
          printf("\n");
          printf("Which Seat do you want to sit? ");

}







int showtime()
{
    int i;
    i=0;
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
        printf("%s %d %.0fh%.0fmin   %.2f\n",Title[i+3].title,Title[i+3].yearMovie,Title[i+3].hr,Title[i+3].min,Title[i+3].stime);
        printf("%s %d %.0fh%.0fmin   %.2f",Title[i+4].title,Title[i+4].yearMovie,Title[i+4].hr,Title[i+4].min,Title[i+4].stime);
    }
    if(x == 9.00)
    {
        printf("[MESSAGE]: There is no movie showing before %.2f  in the system.\n",x);
        printf("Search Again? (Y/N) ");
        scanf("%s",&y);
        if(y == 'y' || y == 'Y')
        {
            Sleep(1500);
            system("cls");
            showtime();

        }
        else {
                printf("Program will go Main Menu");
             Sleep(2000);
            system("cls");
            main();
        }

    }
    if(x == 10.00)
    {
        printf("%s %d %.0fh%.0fmin  %.2f\n",Title[i].title,Title[i].yearMovie,Title[i].hr,Title[i].min,Title[i].stime);
        printf("%s %d %.0fh%.0fmin  %.2f",Title[i+2].title,Title[i+2].yearMovie,Title[i+2].hr,Title[i+2].min,Title[i].stime);


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
