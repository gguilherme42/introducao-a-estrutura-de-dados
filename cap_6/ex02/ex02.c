#include <stdio.h>




void print_vet(int n, int* vet){
	printf("[");
	for (int i = 0; i < n; i++){
		printf("%d, ", vet[i]);
	}
	printf("]\n");

};

void copy_of_arr(int length, int* arr, int* arr_to_copy){
	for (int i = 0; i < length; i++) {
		arr[i] = arr_to_copy[i];
	}
}

void inverte(int n, int* vet){
	int cup = 0;
	int recipient[n];
	copy_of_arr(n, recipient, vet);

	for (int i = 0; i < n; i++) {
		cup = recipient[(n - (i + 1))];
		vet[i] = cup;

	}

}

int main(void){
	int numbers[8] = {0,1,2,3,4,5,6,7};
	int len = 8;

	print_vet(len, numbers);
	inverte(len, numbers);
	print_vet(len, numbers);
	

	return 0;
}
