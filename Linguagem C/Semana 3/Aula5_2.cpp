#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	float somatorio=0, media;
	int i, nota;
	for(i=1;i<=10;i++){
		printf("Digite a nota %d: ",i);
		scanf("%d", &nota);
		somatorio = somatorio+nota;
	}
	media =somatorio/10;
	printf("A media de todas as notas do aluno eh %.2f", media);
	return 0;
}
