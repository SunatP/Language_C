#include <stdio.h>
int main(){
int a[9],b[3][3],x[3][3],i,j;
	printf("Input 1-D array: ");

	for(i=0;i<9;i++){
		scanf("%d",&a[i]);
	}

printf("\n");
printf("2-D array is:\n");

int c=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			b[i][j] = a[c];
			c++;
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

printf("\n");
printf("Transpose is:\n");

int d=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			x[i][j] = b[j][i];
			d++;
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}

printf("\n");
printf("Sum is:\n");

int sum[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum[i][j] = b[i][j] + x[i][j];
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
}
