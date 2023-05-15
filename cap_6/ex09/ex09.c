#include <stdio.h>


void soma(int n, float *a, float* b, float *c){
	for (int i=0; i< n; i++){
		c[i] = a[i] + b[i];
	}
}

void produto(int n, float *a, float *b, float *c){
	int m = 2 * n - 1; // coeficientes de saída
	for (int k=0; k < m; k++){
		c[k] = 0.0;
		for (int i = 0; i <= k; i++) {
			if (i < n && (k - i) < n)
				c[k] = c[k] + a[i] * b[k - i];
		}
	}
}


int main(void){
	float v1[3] = {1.0, 3.0, 4.4}; 
	float v2[3] = {3.1, 4.2, 1.2};
	float v3[3];
	int len = 3;

	soma(len, v1,v2,v3);
	produto(len, v1,v2,v3);
	return 0;
}
