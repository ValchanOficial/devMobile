#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if(idade<16){
		printf("Voce nao pode votar! - Nao eleitor.");
	} else if(idade>=18 && idade<=65){
		printf("Eleitor obrigatorio.");
	} else if(idade>=16 && idade<18 || idade>65){
		printf("Eleitor facultativo.");
	}
	return 0;
}
