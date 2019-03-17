#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
	int numero=0,maior=-11111,menor=99999;
	
	while(numero>=0){
		printf("Digite um valor: ");
		scanf("%d",&numero);
		
		if(numero>0){
			if(numero>maior){
				maior = numero;
			}
			if(numero<menor){
				menor = numero;
			}
		}
	}
	printf("Maior numero: %d\n", maior);
	printf("Menor numero: %d\n", menor);
	return 0;
}
