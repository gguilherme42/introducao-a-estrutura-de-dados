#include <stdio.h>
#define N 3

int is_diagonal(int line, int column){return line == column;}


int is_not_identity(const int A[][N], int l, int c){
	if (is_diagonal(l,c)) return A[l][c] != 1;
	return A[l][c] != 0;

}


int is_identity(const int A[][N]){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			if (is_not_identity(A,i,j)) return 0;
		}
	}
	return 1;
}


void print_m(const int A[][N]){
	printf("[");
	for (int i = 0; i < N; i++){
		printf("[");
		for (int j = 0; j < N; j++){
			printf("%d, ", A[i][j]);
		}
		printf("],\n");
	}
	printf("]\n");
}

void multiply_matrix(const int A[][N], const int B[][N], int C[][N]){
	int cup[N] = {0,0,0};

	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			for (int p = 0; p < N; p++){
				cup[i] += A[i][p] * B[p][i];			
			}
			printf("cup[%d]: %d\n", i, cup[i]);
			C[i][j] = cup[j]; 
		}

	}

}


void print_check_invertible(const int A[][N]){
	printf("Matrix inversa: %s\n", (is_identity(A) ? "SIM": "NÃO"));
}


int main(void){
	int matrix_A[N][N] = {
		{1, 2, 3},
		{0, 1, 4},
		{0, 0, 1}
	};

	int matrix_B[N][N] = {
		{1, -2, 5},
		{0, 1, -4},
		{0, 0, 1}
	};

	int matrix_C[N][N] = {{0,0,0},{0,0,0},{0,0,0}};

	multiply_matrix(matrix_A, matrix_B, matrix_C);
	print_check_invertible(matrix_C);
	//print_m(matrix_C);
	
	return 0;
}
