#include <stdio.h>



void print_v(int n, float  *vet){
	printf("[");
	for (int i = 0; i < n; i++){
		printf("%f, ", vet[i]);
	}
	printf("]\n");
}


void sort(int n, float *vet){
	float cup = 0;
	for (int i = 0; i < (n - 1); i++){
		for (int j = i; j < n; j++) {
			if (vet[i] > vet[j]){
				cup = vet[i];
				vet[i] = vet[j];
				vet[j] = cup;
			}
		
		}
	}
}


void print_h(int n, int *h){
	printf("Histograma: [");
	for (int i = 0; i < n; i++){
		printf("%d, ", h[i]);
	}
	printf("]\n");
}


void histograma(int n, float *v, int *h){
	float element = 0;
	for (int i = 0; i < n; i++){
		if (v[i] >= 0.0 && v[i] < 0.1) h[0] += 1;
		if (v[i] >= 0.1 && v[i] < 0.2) h[1] += 1;
		if (v[i] >= 0.2 && v[i] < 0.3) h[2] += 1;
		if (v[i] >= 0.3 && v[i] < 0.4) h[3] += 1;
		if (v[i] >= 0.4 && v[i] < 0.5) h[4] += 1;
		if (v[i] >= 0.5 && v[i] < 0.6) h[5] += 1;
		if (v[i] >= 0.6 && v[i] < 0.7) h[6] += 1;
		if (v[i] >= 0.7 && v[i] < 0.8) h[7] += 1;
		if (v[i] >= 0.8 && v[i] < 0.9) h[8] += 1;
		if (v[i] >= 0.9 && v[i] < 1.0) h[9] += 1;
	
	}
}


int main(void){
	float lab_test[10] = {0.110,0.200,0.030,0.560,0.323,0.345,0.234,0.560,0.123,0.123};
	int hist[10] = {0,0,0,0,0,0,0,0,0,0}; 
	int len = 10;

	//print_v(len, lab_test);
	sort(len, lab_test);
	histograma(len, lab_test, hist);
	print_v(len, lab_test);
	print_h(len, hist);

	return 0;
}
