#include <stdio.h>


int MDC(int a, int b){
	int r = a % b;
	if (r == 0) return b;
	return MDC(b, r);
}

int main(void){
	unsigned int x, y, z, mdc;

	printf("Digite o valor de x: ");
	scanf("%u", &x);
	printf("Digite o valor de y: ");
	scanf("%u", &y);
	printf("Digite o valor de z: ");
	scanf("%u", &z);

	mdc = MDC(MDC(x, y), z);

	printf("O mmc de %u, %u, e %u é: %u\n", x,y,z,mdc);
	return 0;
}
