#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
	//Determinante de uma matriz 2x2 
	int a[2][2];
	int i, j;
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d", &a[i][j]);
		}
	}
	
	int det = a[0][0] * a[1][1] - (a[1][0] * a[0][1]);
	printf("O determinante eh: %d", det);
	
	return 0;
}
