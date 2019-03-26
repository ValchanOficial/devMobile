#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
	int a[10];
	int i, x;
	
	for(i=0; i<10; i++){
		printf("Digite o elemento [%d]: ", i);
		scanf("%d",&a[i]);
	}
	printf("Digite o valor de x: ");
	scanf("%d",&x);
	
	for(i=0; i<10; i++){
		if(x==a[i]){
			printf("Indice de a: %d",i);
		}
	}
	
	return 0;
}
