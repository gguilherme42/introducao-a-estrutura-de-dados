#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void){
	int escolha, usuario, computador;
	printf("Entre com seu número: ");
	scanf("%d", &usuario);

	srand(time(NULL));
	computador = rand() % 10;
	escolha = (rand() % 2);
	printf("Computador: %d\n", computador);


	if (((usuario + computador) % 2) == escolha)
		printf("Você ganhou!\n");
	else
		printf("Você perdeu!\n");

	return 0;
}
