#include <stdio.h>
#include <stdlib.h>


void print_v(int len, float *vet){
	printf("[");
	
	int is_last_element(int m){return (m + 1) == len;}
	
	for (int i = 0; i < len; i++){
		if (is_last_element(i)) printf("%.2f", vet[i]);
		else printf("%.2f, ", vet[i]);
	}
	printf("]\n");
}


float* reverso(int len, float *vet){
	float* result = (float *) malloc(len * sizeof(float));
	int c = 0;
	for (int i = (len - 1); i >= 0; i--){
		result[c] = vet[i];
		c ++;
	}
	return result;

}

int main(void){
	float numbers[5] = {0,1,2,3,4};
	int l = 5;
	float* new_n;

	print_v(l, numbers);
	new_n = reverso(l, numbers);
	print_v(l, new_n);
	free(new_n);
	return 0;
}
