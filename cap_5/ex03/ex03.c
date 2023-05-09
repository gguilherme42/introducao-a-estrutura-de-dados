#include <stdio.h>


void fibonacci(int x){
	int b1 = 1;
	int b2 = 2;
	int next = 0;
	int is_on_f = 0;
	for (int i = 0; i < x; i ++){
		if (i == 0 || i == 1 || i == 2){
			printf("%d ", i);
		} else {
			next = b1 + b2;
			b1 = b2;
			b2 = next;
			printf("%d ", next);
			if (x == next) is_on_f = 1;
		}
		
	}
	printf("\n");
	if (is_on_f){
		printf("O valor fornecido pertence à série.\n");
	} else {
		printf("O valor fornecido não pertence à série.\n");
	}
		
}


int main(void){
	unsigned int a, b;
	printf("Primeiros termos da série de Fibonnaci: ");
	scanf("%u", &a);
	
	fibonacci(a);
	return 0;
}
