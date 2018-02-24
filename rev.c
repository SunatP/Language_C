#include <stdio.h>
int main(){
int n;
	printf("Input n: ");
	scanf("%d",&n);

int i,data[n];
	printf("Input num: ");
	for(i=0;i<n;i++){
	scanf("%d",&data[i]);
	}

int sum=0;
	for(i=0;i<n;i++){
	sum = sum+data[i];
	}
	printf("Sum is: %d\n",sum);

float mean;
	mean = sum/n;
	printf("Mean is: %f\n",mean);

	printf("Reverse is: ");
	for(i=n-1;i>=0;i--){
	printf("%d ",data[i]);
	}
}


