#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	
	//Objetivo: colocar os numeros inseridos pelo usuario em ordem crescente
	int n, x;
	printf("Digite o valor de n: ");
	scanf("%d",&n);
	printf("Digite o valor de x: ");
	scanf("%d",&x);
	
	//Estruturade decisão
	if(n==x){
		printf("Os numeros sao iguais!");
	}else if(n>x){
		printf("%d %d", x,n);
	} else {
		printf("%d %d", n,x);
	}
	return 0;
}
