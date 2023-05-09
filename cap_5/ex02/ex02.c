#include <stdio.h>


int is_prime(int n){
	if (n < 2) return 0;
	for (int i = 2; i < n; i++){
		if (n % i == 0) return 0;
	}
	return 1;
}


void prime_numbers(int x){
	for (int i = 0; i < x; i++){
		if (is_prime(i)){
			printf("%d ", i);
		}
	}
	printf("\n");
}


void first_n_prime_numbers(int l){
	int count = 0;
	int n = 2;
	while (count < l){
		if (is_prime(n)){
			printf("%d ", n);
			count++;
		}
		n++;
	
	}
	printf("\n");
}



int main(void){
	unsigned int a, b;
	printf("Valor para imprimir números primos menores que ele: ");
	scanf("%u", &a);
	printf("Quantos n primeiros primos deseja imprimir? ");
	scanf("%u", &b);


	prime_numbers(a);
	first_n_prime_numbers(b);
	return 0;
}
