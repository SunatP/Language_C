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

        printf("Select %s (Y/N):? ",Title[asd-1].title); // เลือกหนัง
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
    int seatt[4][10];
    char row[4]={'A','B','C','D'};
    int i,j,rc,g;
    char go;
    printf("===============================\n");
    printf("Available Seat\n");
    printf("===============================\n");

    for(i=0;i<4;i++)
    {
        printf("Row %c |" ,row[i]);
        for(j=0;j<10;j++)
        {
            printf("O|");
        }
        printf("\n");
    }
    printf("How many Tickets do you want to buy? ");
    scanf("%d",&rc);
    printf("Which Seat do you want to sit?\n");

    int k[4];
    int l[10];

    for(i=0;i<4;i++)
    {
        for(j=0;j<10;j++)
        {
            seatt[i][j] = 0;
        }
    }

    for(i=0;i<rc;i++)
    {
        if(i!=0)
        {
            printf("\nInput next: ");
        }

        scanf("%d %d",&k[i],&l[i]);
        seatt[k[i]-1][l[i]-1] = 1;
    }
    for(i=0;i<rc;i++)
    {
    printf("\nYou are now have booked the seat number %d,%d at Row %c\n",k[i],l[i],row[k[i]-1]);
    }
    for(i=0;i<4;i++)
    {
        printf("Row %c |" ,row[i]);
        for(j=0;j<10;j++)
        {
            if(seatt[i][j] == 0)
            {
                printf("O|");
            }
            else
            {
                printf("X|");
            }
        }
        printf("\n");
    }

    for(i=0;i<rc;i++)
    {
        printf("\n");
        printf("[Ticket]\n");
        printf("-------------------------------------\n");
        printf("SEAT No. %d,%d Row %c",k[i],l[i],row[k[i]-1]);
        printf("\n-------------------------------------\n");
        printf("\n [%s]\n",Title[i].title);
        printf("Title: %s\n",Title[i].title);
        printf("Year: %d\n",Title[i].yearMovie);
        printf("Duration: %.0fh %.0fmin\n",Title[i].hr,Title[i].min);
        printf("Time: %.2f - %.2f\n",Title[i].hr,Title[i].min);
        printf("Screen: %d\n",Title[i].screen);
        printf("-------------------------------------\n");

    }
        printf("Do you want to continue booking ? (Y/N):");
        gobook :
        scanf("%s",&go);
        if(go == 'Y' ||go =='y')
        {
            printf("Program will go To Search Again");
            Sleep(2000);
            system("cls");
           search();

        }
        else if(go == 'N' ||go =='n')
        {
            Sleep(1500);
            printf("Program will go To Main Menu");
            system("cls");
            main();
        }


}

int seat2()
{
     int asd,enter;
    char y,q;
    printf("What movie do you want to watch?[number of movie]: ");
    scanf("%d",&asd); // รับค่าเป็นตัวเลข
            printf("[%s]\n",Title[asd-1].title);
            printf("Title: %s\n",Title[asd-1].title);
            printf("Year: %d\n", Title[asd-1].yearMovie);
            printf("Duration: %.0fh %.0fmin\n",Title[asd-1].hr,Title[asd-1].min);
            printf("Time: %.2f - %.2f\n",  Title[asd-1].stime,(Title[asd-1].stime+Title[asd-1].hr+(Title[asd-1].min/100)));
            printf("Screen: %d\n",Title[asd-1].screen);

        printf("Select %s (Y/N):? ",Title[asd-1].title);
        scanf("%s",&y);
        if(y=='Y'||y=='y'){
    int seatt[4][10];
    char row[4]={'A','B','C','D'};
    int i,j,rc,g;
    char go;
    printf("===============================\n");
    printf("Available Seat\n");
    printf("===============================\n");

    for(i=0;i<4;i++)
    {
        printf("Row %c |" ,row[i]);
        for(j=0;j<10;j++)
        {
            printf("O|");
        }
        printf("\n");
    }
    printf("How many Tickets do you want to buy? ");
    scanf("%d",&rc);
    printf("Which Seat do you want to sit?\n");

    int k[4];
    int l[10];

    for(i=0;i<4;i++)
    {
        for(j=0;j<10;j++)
        {
            seatt[i][j] = 0;
        }
    }

    for(i=0;i<rc;i++)
    {
        if(i!=0)
        {
            printf("\nInput next: ");
        }

        scanf("%d %d",&k[i],&l[i]);
        seatt[k[i]-1][l[i]-1] = 1;
    }
    for(i=0;i<rc;i++)
    {
    printf("\nYou are now have booked the seat number %d,%d at Row %c\n",k[i],l[i],row[k[i]-1]);
    }
    for(i=0;i<4;i++)
    {
        printf("Row %c |" ,row[i]);
        for(j=0;j<10;j++)
        {
            if(seatt[i][j] == 0)
            {
                printf("O|");
            }
            else
            {
                printf("X|");
            }
        }
        printf("\n");
    }

    for(i=0;i<rc;i++)
    {
        printf("\n");
        printf("[Ticket]\n");
        printf("-------------------------------------\n");
        printf("SEAT No. %d,%d Row %c",k[i],l[i],row[k[i]-1]);
        printf("\n-------------------------------------\n");
        printf("\n [%s]\n",Title[i].title);
        printf("Title: %s\n",Title[i].title);
        printf("Year: %d\n",Title[i].yearMovie);
        printf("Duration: %.0fh %.0fmin\n",Title[i].hr,Title[i].min);
        printf("Time: %.2f - %.2f\n",Title[i].hr,Title[i].min);
        printf("Screen: %d\n",Title[i].screen);
        printf("-------------------------------------\n");

    }
        printf("Do you want to continue booking ? (Y/N):");
        gobook :
        scanf("%s",&go);
        if(go == 'Y' ||go =='y')
        {
            printf("Program will go To Search Again");
            Sleep(2000);
            system("cls");
           showtime();

        }
        else if(go == 'N' ||go =='n')
        {
            Sleep(1500);
            printf("Program will go To Main Menu");
            system("cls");
            main();
        }

    }
        if(y=='N'||y=='n')
        {
             Sleep(1500);
            printf("Program will go To Search By Time");
            system("cls");
            showtime();
        }
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
    if(x == 11.00) // 2 Movie
    {
        printf("[%d] %s %d %.0fh%.0fmin   %.2f\n",i+4,Title[i+3].title,Title[i+3].yearMovie,Title[i+3].hr,Title[i+3].min,Title[i+3].stime);
        printf("[%d] %s %d %.0fh%.0fmin   %.2f\n",i+5,Title[i+4].title,Title[i+4].yearMovie,Title[i+4].hr,Title[i+4].min,Title[i+4].stime);
        printf("Select Movie to Watch?(Y/N): ");
        scanf("%s",&y);
        if(y == 'Y'|| y=='y')
        {
            seat2();
        }
        else{
             printf("Program will go to search Movie by Time Again");
             Sleep(2000);
            system("cls");
            showtime();
        }
    }
    if(x == 7.00 || x== 06.00 ||x== 8.00||x == 9.00 || x== 12.00 || x == 18.00 || x == 19.00 || x == 20.00 || x == 21.00 || x == 22.00 || x == 23.00 || x == 24.00 )
    {
        printf("[MESSAGE]: There is no movie showing before %.2f  in the system.\n",x);
        printf("Search Again? (Y/N) ");
        scanf("%s",&y);
        if(y == 'y' || y == 'Y')
        {
            Sleep(2000);
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
    if(x == 10.00) // 2 Movie
    {
        printf("[%d] %s %d %.0fh%.0fmin  %.2f\n",i+1,Title[i].title,Title[i].yearMovie,Title[i].hr,Title[i].min,Title[i].stime);
        printf("[%d] %s %d %.0fh%.0fmin  %.2f\n",i+3,Title[i+2].title,Title[i+2].yearMovie,Title[i+2].hr,Title[i+2].min,Title[i].stime);
        printf("Select Movie to Watch?(Y/N): ");
        scanf("%s",&y);
        if(y == 'Y'|| y=='y')
        {
           seat2();
        }
        else{
             printf("Program will go to search Movie by Time Again");
             Sleep(2000);
            system("cls");
            showtime();
        }
    }
     if(x == 13.00) // 2 Movie
    {
        printf("[%d] %s %d %.0fh%.0fmin  %.2f\n",i+2,Title[i+1].title,Title[i+1].yearMovie,Title[i+1].hr,Title[i+1].min,Title[i+1].stime);
        printf("[%d] %s %d %.0fh%.0fmin  %.2f\n",i+9,Title[i+8].title,Title[i+8].yearMovie,Title[i+8].hr,Title[i+8].min,Title[i+8].stime);
        printf("Select Movie to Watch?(Y/N): ");
        scanf("%s",&y);
        if(y == 'Y'|| y=='y')
        {
            seat2();
        }
        else{
             printf("Program will go to search Movie by Time Again");
             Sleep(2000);
            system("cls");
            showtime();
        }
    }
if(x == 15.00) // 1 Movie
    {
        printf("[%d] %s %d %.0fh%.0fmin  %.2f\n",i+7,Title[i+6].title,Title[i+6].yearMovie,Title[i+6].hr,Title[i+6].min,Title[i+6].stime);
        printf("Select Movie to Watch?(Y/N): ");
        scanf("%s",&y);
        if(y == 'Y'|| y=='y')
        {
           seat2();
        }
        else{
             printf("Program will go to search Movie by Time Again");
             Sleep(2000);
            system("cls");
            showtime();
        }
    }
    if(x == 16.00) // 1 Movie
    {
        printf("[%d] %s %d %.0fh%.0fmin  %.2f\n",i+8,Title[i+7].title,Title[i+7].yearMovie,Title[i+7].hr,Title[i+7].min,Title[i+7].stime);
        printf("Select Movie to Watch?(Y/N): ");
        scanf("%s",&y);
        if(y == 'Y'|| y=='y')
        {
            seat2();
        }
        else{
             printf("Program will go to search Movie by Time Again");
             Sleep(2000);
            system("cls");
            showtime();
        }
    }
    if(x == 17.00) // 1 Movie
    {
        printf("[%d] %s %d %.0fh%.0fmin  %.2f\n",i+10,Title[i+9].title,Title[i+9].yearMovie,Title[i+9].hr,Title[i+9].min,Title[i+9].stime);
        printf("Select Movie to Watch?(Y/N): ");
        scanf("%s",&y);
        if(y == 'Y'|| y=='y')
        {
            seat2();
        }
        else{
             printf("Program will go to search Movie by Time Again");
             Sleep(2000);
            system("cls");
            showtime();
        }
    }
     if(x == 14.00) // 1 Movie
    {
        printf("[%d] %s %d %.0fh%.0fmin  %.2f\n",i+6,Title[i+5].title,Title[i+5].yearMovie,Title[i+5].hr,Title[i+5].min,Title[i+5].stime);
        printf("Select Movie to Watch?(Y/N): ");
        scanf("%s",&y);
        if(y == 'Y'|| y=='y')
        {
            seat2();
        }
        else{
             printf("Program will go to search Movie by Time Again");
             Sleep(2000);
            system("cls");
            showtime();
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
