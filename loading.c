/*#include <stdio.h>
#include <dos.h>

int main () {
    char spinner[] = "|/-\\";
    int i, j;
    printf( "Loading...." );
    for ( i = 0 ; i < 10 ; i++ ) {
        for ( j = 0 ; j < 4 ; j++ ) {
            printf( "%c\b", spinner[j] );
            fflush( stdout );
            delay( 250 );
        }
    }
    return 0;
}
*/

#include <time.h>
#include <stdio.h>

int main(void)
{
    time_t mytime;
    mytime = time(NULL);
    printf("Current Time : %s", ctime(&mytime));

    return 0;
}
