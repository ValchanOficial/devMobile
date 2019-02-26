#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int numero,soma,sub,mult;
	float num1,num2,div;
	printf("-------AULA 1-------\n");
	printf("Digite um numero: ");
	scanf("%d",&numero);
	printf("O numero tem como valor %d \n", numero);
	printf("-------AULA 2-------\n");
	printf("Digite um numero real: ");
	scanf("%f",&num1);
	printf("Digite outro numero real: ");
	scanf("%f",&num2);
	div = num1/num2;
	mult = num1*num2;
	soma = num1+num2;
	sub = num1-num2;
	printf("A divisao e: %.2f \n", div);
	printf("A multiplicacao e: %d \n", mult);
	printf("A soma e: %d \n", soma);
	printf("A subtracao e: %d \n", sub);
	return 0;
}
