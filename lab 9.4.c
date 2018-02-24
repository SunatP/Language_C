#include <stdio.h>
int getC(int A, int B, int size){
    if(B==size-1) return A+1;
    else return A;
}

int getD(int A, int B,int C, int size){
    if(C!=A) return 0;
    else return B+1;
}

int main() {
    int N,K;
    scanf("%d %d",&N,&K);
    int array[N][N];
    int i,j;
    for(i=0;i<N;i++){ //for loop เช็คค่าใน array i
        for(j=0;j<N;j++){ //for loop เช็คค่าใน array j
            scanf("%d",&array[i][j]); //ให้สแกนค่าลง array 2D ในตำแหน่งที่ i , j
        }
    }

    int a,b,c,d,e,f,sum,count=0;
    for(a=0;a<N;a++){ //for loop a คือ  การเช็คตำแหน่งที่ a น้อยกว่า  N ให้ทำการเพิ่มค่า
        for(b=0;b<N;b++){
            c = getC(a,b,N); //c คือการดึงค่า โดยฟังก์ชั่น getC
            for(c;c<N;c++){
                d = getD(a,b,c,N); //d คือการดึงค่า โดยฟังก์ชั่น getD
                for(d;d<N;d++){
                    e = getC(c,d,N); //e คือการดึงค่า โดยฟังก์ชั่น getC
                    for(e;e<N;e++){
                        f = getD(c,d,e,N); //f คือการดึงค่า โดยฟังก์ชั่น getD
                        for(f;f<N;f++){
                            sum = array[a][b]+array[c][d]+array[e][f]; // ค่า ของ sum คือ array ทั้ง 6 ค่า
                            if(sum==K) count++;  //ถ้าK หารเอาเศษลงตัว ให้ count เพิ่มค่า

                        }
                    }
                }
            }

        }
    }
    printf("DUMMY = %d\n",count);
}
