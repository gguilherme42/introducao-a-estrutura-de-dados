#include <stdio.h>



int MDC(int x, int y){
	int r = x % y;
	if (r == 0) return y;
	while (r != 0){
		x = y;
		y = r;
	       	r = x % y;	
	
	}
	
	return y;
	//return MDC(y, r); // versao funcional
	
}

int main(void){
	unsigned int a, b;
	printf("Valor de a: ");
	scanf("%d", &a);
	printf("Valor de b: ");
	scanf("%d", &b);

	printf("O MDC de %d e %d é: %d\n", a, b, MDC(a,b));

	return 0;
}
