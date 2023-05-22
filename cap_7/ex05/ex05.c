#include <stdio.h>
#include <stdlib.h>


float* create_vector_matrix(int m, int n){
	float * result = (float *) malloc(m * n * sizeof(float));
	int k = 0;
	
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			k = i * n + j;
			result[k] = 0;
		}
	}

	return result;

}


float** convert_a(int m, int n, float* mat){
	float ** result = (float **) malloc(m * sizeof(float));
	
	for (int i = 0; i < m; i++){
		result[i] = (float *) malloc(n * sizeof(float));
	}

	int k = 0;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			k = i * n + j;
			result[i][j] = mat[k];
		}
	}

	

	return result;

};


float* convert_b(int m, int n, float** mat){
	float * result = (float *) malloc(m*n * sizeof(float));
	

	int k = 0;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			k = i * n + j;
			result[k] = mat[i][j];
		}
	}
	return result;
	

}

int main(void){
	int m = 3;
	int n = 2;
	float * matrix_A;
	float ** matrix_B;

	matrix_A = create_vector_matrix(m, n);
	matrix_B = convert_a(m, n, matrix_A);
        matrix_A = convert_b(m, n, matrix_B);	

	return 0;
}
