#include <stdio.h>

int coeficiente(int n, int k){
	if (n == k || k == 0) return 1;
	return coeficiente(n - 1, k) + coeficiente(n - 1, k - 1);
}


int main(void){
	int a, b;
	printf("Valor de a: ");
	scanf("%d", &a);
	printf("Valor de b: ");
	scanf("%d", &b);

	printf("Resultado: %d\n", coeficiente(a,b));
	return 0;
}

