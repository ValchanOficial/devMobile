#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
	int numeros[8];
	int ocorrencia=0, valor;
	int i;
	
	printf("Digite o numero: ",i);
	scanf("%d", &valor);
	
	for(i=0; i<8; i++){
		printf("Digite o numero [%d]: ",i);
		scanf("%d", &numeros[i]);
	}
	
	for(i=0; i<8; i++){
		if(numeros[i]==valor){
			ocorrencia++;
		}		
	}
	printf("Existe(m) %d ocorrencias do valor %d",ocorrencia,valor);
	return 0;
}
