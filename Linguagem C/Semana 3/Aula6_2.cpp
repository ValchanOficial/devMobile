#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
	int contador=0;
	float somatorio=0,numero=0,media=0;
	
	while(numero>=0){
		printf("Digite um valor: ");
		scanf("%f",&numero);
		
		if(numero>0){
			somatorio=somatorio+numero;
			contador++;
		}
	}
	media = somatorio/contador;
	printf("A quantidade de valores lidos foi: %d\n", contador);
	printf("O somatorio foi: %.2f\n", somatorio);
	printf("A media foi: %.2f\n", media);
	return 0;
}
