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
    for(i=0;i<N;i++){ //for loop �礤��� array i
        for(j=0;j<N;j++){ //for loop �礤��� array j
            scanf("%d",&array[i][j]); //����᡹���ŧ array 2D 㹵��˹觷�� i , j
        }
    }

    int a,b,c,d,e,f,sum,count=0;
    for(a=0;a<N;a++){ //for loop a ���  ����礵��˹觷�� a ���¡���  N ���ӡ���������
        for(b=0;b<N;b++){
            c = getC(a,b,N); //c ��͡�ô֧��� �¿ѧ���� getC
            for(c;c<N;c++){
                d = getD(a,b,c,N); //d ��͡�ô֧��� �¿ѧ���� getD
                for(d;d<N;d++){
                    e = getC(c,d,N); //e ��͡�ô֧��� �¿ѧ���� getC
                    for(e;e<N;e++){
                        f = getD(c,d,e,N); //f ��͡�ô֧��� �¿ѧ���� getD
                        for(f;f<N;f++){
                            sum = array[a][b]+array[c][d]+array[e][f]; // ��� �ͧ sum ��� array ��� 6 ���
                            if(sum==K) count++;  //���K ���������ŧ��� ��� count �������

                        }
                    }
                }
            }

        }
    }
    printf("DUMMY = %d\n",count);
}
