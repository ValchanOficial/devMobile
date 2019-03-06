#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	float media,nota1,nota2,nota3,nota4;
	
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	printf("Digite a nota 3: ");
	scanf("%f", &nota3);
	printf("Digite a nota 4: ");
	scanf("%f", &nota4);
	
	media = (nota1+nota2+nota3+nota4)/4;
	printf("A media e: %.1f\n",media);
	
	if(media<3){
		printf("Reprovado!");
	} else if(media>=3 && media<7){
		printf("Prova Final!");
	} else if(media>=7){
		printf("Aprovado!");
	}
	return 0;
}
