#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
	int contador=0;
	while(contador<5){
		printf("Iteracao %d\n", contador);
		contador = contador+1;//incremento
	}
	return 0;
}
