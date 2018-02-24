#include <stdio.h>

int main() {
    int size;
    char data;
    printf("Input number & Character : ");
    scanf("%d %c",&size,&data);
    char array[size][size]; //array 2-D
    int i,j;
    for(i=0;i<size;i++){ //array ตำแหน่งที่ i
        for(j=0;j<size;j++){ //array ตำแหน่งที่ j
            if(i==0 || i== size-1 || j== size-(i+1)) //ตำแหน่งของตัวอักษรโดยใช้เลขมากำหนดsize
                array[i][j] = data; //ข้อมูลที่อยู่ใน array เท่ากับ data
            else array[i][j] = ' '; // ถ้าไม่มีข้อมูลให้เว้นว่างไว้
            printf("%c ",array[i][j]); //สั่งให้พิมพ์ตัวอักษรออกมาจาก array 2-D
        }
        printf("\n");
    }
}
