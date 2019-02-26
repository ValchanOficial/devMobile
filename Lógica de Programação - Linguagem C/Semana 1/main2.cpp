/*  
PROBLEMA:
Fazer um algoritmo que calcule o cubo de um numero dado pelo usuario;
	ENTRADA: 2 SAIDA: 8
	ENTRADA: 3 SAIDA: 27
COMANDOS ENVOLVIDOS:
	-Escreva/ printf();
	-Leia / scanf();
	-Atribuição
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float n, cubo;
	printf("Cubo de um numero: ");
	scanf("%f",&n);
	cubo = pow(n, 3);
	printf("\nCubo = %.2f \n", cubo);
	system("pause");
}
