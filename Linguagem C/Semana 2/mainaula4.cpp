#include <stdio.h>
#include <stdlib.h>

//IMC
int main(int argc, char** argv) {
	float peso, altura, imc;
	printf("Digite o peso: "); //exemplo 70
	scanf("%f",&peso);
	printf("Digite a altura: "); //execemplo 1.7
	scanf("%f",&altura);
	imc = peso/(altura*altura);
	printf("IMC: %.2f\n",imc);
	if(imc<17){
		printf("Voce esta muito abaixo do peso ideal!");
	} else if (imc>=17.0 && imc<=18.49){
		printf("Abaixo do peso!");
	} else if (imc>=18.50 && imc<=24.99){
		printf("Parabens! Voce esta no seu peso normal!");		
	} else if (imc>=25.0 && imc<=29.99){
		printf("Voce esta acima do seu peso (sobrepeso)!");		
	} else if (imc>=30.0 && imc<=34.99){
		printf("Obesidade Grau I!");		
	} else if (imc>=35.0 && imc<=39.99){
		printf("Obesidade Grau II!");		
	} else if (imc>=40){
		printf("Obesidade Grau III!");
	}
	return 0;
}
