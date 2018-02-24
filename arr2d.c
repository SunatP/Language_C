#include <stdio.h>
void main()
{
	int i, j, val[3][4] = {8,16,9,52,3,15,27,6,14,25,2,10};
printf("\n Display of val array by eplicit element");
	printf("\n%2d %2d %2d",val[0][0],val[0][1],val[0][2],val[0][3]);
	printf("\n%2d %2d %2d",val[1][0],val[1][1],val[1][2],val[1][3]);
	printf("\n%2d %2d %2d",val[2][0],val[2][1],val[2][2],val[2][3]);
	for(i = 0; i < 3; ++i){xine for each row */
		for ( j = 0; j < 4; ++j)
			printf("%2d   ", val[i][j]);
	}
}
