#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
	int n=0,cont=0;
	float media,somatorio=0;
	
	do{
		printf("Digite um numero: ");
		scanf("%d",&n);
		
		if(n>0){
			somatorio=somatorio+n;
			cont++;
		}
	}while(n>0);
	
	printf("Somatorio: %.f\n",somatorio);
	printf("Valores lidos: %d\n",cont);
	media=somatorio/cont;
	printf("Media: %.2f",media);
	return 0;
}
