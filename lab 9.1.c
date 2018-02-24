#include <stdio.h
#include <time.h>

int main() {
    srand(time(NULL));      //สั่งให้random ค่า
    int i,j,array[3][4];   //array [3][4] เก็บค่าได้ทั้งหมด 12 ค่า คอลัมน์ คือ 3  แถว คือ 4

    for(i=0;i<3;i++){       //for loop array แถวที่ i dimension [i]
        for(j=0;j<4;j++){   //for loop array แถวที่ j dimension [j]
            array[i][j] = 0;
            array[i][j] = rand()%10; // สั่งให้ array [i] [j] สุ่มค่าโดยใช้ time.h มาประมวลผล rand()
            printf("%d ",array[i][j]); // สั่งให้แสดงผลค่าจาก array ตำแหน่งที่ [i] [j]


        }

        printf("\n");
        printf("%d ",array[2][3]);
    }
}
