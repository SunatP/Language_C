#include <stdio.h>

int main() {
    int size;
    char data;
    printf("Input number & Character : ");
    scanf("%d %c",&size,&data);
    char array[size][size]; //array 2-D
    int i,j;
    for(i=0;i<size;i++){ //array ���˹觷�� i
        for(j=0;j<size;j++){ //array ���˹觷�� j
            if(i==0 || i== size-1 || j== size-(i+1)) //���˹觢ͧ����ѡ�������Ţ�ҡ�˹�size
                array[i][j] = data; //�����ŷ������� array ��ҡѺ data
            else array[i][j] = ' '; // �������բ�������������ҧ���
            printf("%c ",array[i][j]); //�������������ѡ���͡�Ҩҡ array 2-D
        }
        printf("\n");
    }
}
