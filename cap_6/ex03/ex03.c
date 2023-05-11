#include <stdio.h>


float minimo(int n, float* vet){
	float result = vet[0];
	for(int i = 0; i < n; i++){
		if (vet[i] < result) result = vet[i];
	}

	return result;
}

int main(void){
	float numbers[5] = {3.1,4.7,-3.3,1.0,0.5};
	int len = 5;
	
	printf("O valor mínimo é: %.2f\n", minimo(len, numbers));
	return 0;
}
