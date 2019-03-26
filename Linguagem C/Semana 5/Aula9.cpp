#include <stdlib.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int maiorNumero(int num1, int num2){
	int res = -1;
	if(num1>num2){
		res = num1;
	} else if (num2>num1){
		res = num2;
	}
	return res;
}

int main(int argc, char** argv) {
	
	int i, num1, num2;
	
	void imprimaMensagem(void);
	imprimaMensagem();
		
	for(i=0; i<5; i++){
		printf("Digite um numero: ");
		scanf("%d", &num1);
		
		printf("Digite outro numero: ");
		scanf("%d", &num2);
		
		int res = maiorNumero(num1,num2);
		
		if(res == -1){
			printf("Os numeros sao iguais!\n\n");
		} else {
			printf("O maior numero eh: %d\n\n",res);
		}
	}
	
	return 0;
}

void imprimaMensagem(void){
	printf("Aula 9\n");
	printf("--------------------------\n");
}

