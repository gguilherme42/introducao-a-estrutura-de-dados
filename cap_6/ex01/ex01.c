#include <stdio.h>


int pares(int n, int* vet){
	int result = 0;
	for (int i=0; i < n; i++){
		if (vet[i] % 2 == 0) result++;
	}
	return result;
}

int main(void){
	int numbers[8] = {1,20,40,4,5,7,11,22};
	int len = 8;

	printf("Há %d números pares na lista\n", pares(len, numbers));

	return 0;
}
