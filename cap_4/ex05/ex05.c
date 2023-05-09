#include <stdio.h>


int F(int i){
	if (i == 0) return 0;
	if (i == 1) return 1;
	return F(i - 2) + F(i - 1);
}

int main(void){
	unsigned int x;
	printf("Valor de x: ");
	scanf("%d", &x);
	printf("%d-ésimo termo é: %d\n", x, F(x));

	return 0;
}
