#include <stdio.h>
#include <stdlib.h>


void print_v(int len, int *vet){
	printf("[");
	
	int is_last_element(int m){return (m + 1) == len;}
	
	for (int i = 0; i < len; i++){
		if (is_last_element(i)) printf("%d", vet[i]);
		else printf("%d, ", vet[i]);
	}
	printf("]\n");
}


int is_even(int n){return (n % 2) == 0;}



int* somente_pares(int len, int* vet){
	int* result = (int *) malloc(1 * sizeof(int));
	int p = 0;

	for (int i = 0; i < len; i++){
		if (is_even(vet[i])) {
			result[p] = vet[i];
			p++;
		}
	
	}

	return result;
}


int how_many_evens(int len, int* vet){
	int result = 0;
	for (int i = 0; i < len; i++){
		if (is_even(vet[i])) result++;
	}
	return result;
}

int main(void){
	int numbers[10] = {0,1,2,2,4,5,6,7,8,9};
	int l = 10;
	int * even_numbers;

	print_v(l, numbers);
	even_numbers = somente_pares(l, numbers);
	print_v(how_many_evens(l, numbers), even_numbers);

	return 0;
}
