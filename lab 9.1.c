#include <stdio.h
#include <time.h>

int main() {
    srand(time(NULL));      //������random ���
    int i,j,array[3][4];   //array [3][4] �纤��������� 12 ��� ������� ��� 3  �� ��� 4

    for(i=0;i<3;i++){       //for loop array �Ƿ�� i dimension [i]
        for(j=0;j<4;j++){   //for loop array �Ƿ�� j dimension [j]
            array[i][j] = 0;
            array[i][j] = rand()%10; // ������ array [i] [j] ����������� time.h �һ����ż� rand()
            printf("%d ",array[i][j]); // �������ʴ��Ť�Ҩҡ array ���˹觷�� [i] [j]


        }

        printf("\n");
        printf("%d ",array[2][3]);
    }
}
