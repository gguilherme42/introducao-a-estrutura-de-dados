#include <stdio.h>



void print_v(int n, float  *vet){
	printf("[");
	for (int i = 0; i < n; i++){
		printf("%f, ", vet[i]);
	}
	printf("]\n");
}




void print_h(int n, int *h){
	printf("Histograma: [");
	for (int i = 0; i < n; i++){
		printf("%d, ", h[i]);
	}
	printf("]\n");
}


void histograma(int n, float *v, int *h){
	float interval[11] = {0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0};
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 10; j++){
			if (v[i] >= interval[j] && v[i] < interval[j + 1]) {
				h[j]++;
				break;
				
			}
		}
	}
}


int main(void){
	float lab_test[10] = {0.110,0.200,0.030,0.560,0.323,0.345,0.234,0.960,0.123,0.123};
	int hist[10] = {0,0,0,0,0,0,0,0,0,0}; 
	int len = 10;
	histograma(len, lab_test, hist);
	print_v(len, lab_test);
	print_h(len, hist);

	return 0;
}
