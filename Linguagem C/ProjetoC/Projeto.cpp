#include <stdlib.h>
#include <stdio.h>

//******************************************************

//Instituto Federal de S�o Paulo - Campus Sert�ozinho

//Disciplina......: M2LPBA

//Programa��o de Computadores e Dispositivos M�veis

//Aluna...........: Val�ria Padilha de Vargas

//******************************************************

int main(int argc, char** argv) {
	//Cria variaveis
	int vet[5];
	int soma, mult;
	//Adiciona valores ao vetor e realiza a soma e multiplica��o
	for(int i=0; i<5; i++){
		printf("Informe um valor inteiro para a posicao %d: ",i);
		scanf("%d",&vet[i]);
		printf("\n");
		soma = soma + vet[i];
		mult = mult * vet[i];
	}
	//Informa o valor da soma
	printf("O valor da Soma eh: %d\n",soma);
	//Informa se o valor eh positivo ou negativo
	if(soma<0){
		printf("O valor da Soma eh negativo\n\n");
	}else{
		printf("O valor da Soma eh positivo\n\n");
	}
	//Informa o valor da Multiplicacao 
	printf("O valor da Multiplicacao eh: %d\n",mult);
	//Informa se o valor eh positivo ou negativo	
	if(soma<0){
		printf("O valor da Multiplicacao eh negativo\n");
	}else{
		printf("O valor da Multiplicacao eh positivo\n");
	}
	return 0;
}
