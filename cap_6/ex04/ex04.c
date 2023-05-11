#include <stdio.h>


int pares(int n, int* vet){
	if (n == 1) return (vet[0] % 2 == 0 )? 1: 0;
	int result = (vet[n - 1] % 2 == 0)? 1: 0;
	return result + pares(n - 1, vet);
}

void inverte(int* vet, int left_index, int right_index){
	if (left_index >= right_index) return;
	int cup = vet[left_index];
	vet[left_index] = vet[right_index];
	vet[right_index] = cup;
	return inverte(vet, left_index + 1, right_index - 1);

}


void print_arr(int n, int* vet){
	printf("[");
	for (int i = 0; i < n; i++){
		printf("%d, ", vet[i]);
	}
	printf("]\n");
}

int minimo(int n, int* vet){
	if (n == 1) return vet[0];
	int result = minimo(n - 1, &vet[1]);
	return  vet[0] < result ? vet[0]: result;
}





int main(void){
	int numbers[6] = {0,1,2,3,4,5};
	int len = 6;
	
	print_arr(len, numbers);
	inverte(numbers, 0, len - 1);
	print_arr(len, numbers);
	printf("Há %d pares\n", pares(len, numbers));
	printf("O menor valor é: %d\n", minimo(len, numbers));

	return 0;
}
