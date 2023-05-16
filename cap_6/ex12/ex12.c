#include <stdio.h>
#define N 3



int is_diagonal(int line, int column){return line == column;}

int identidade(double A[][N]){
	int result = 1;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			if (is_diagonal(i,j)){
				if (A[i][j] != 1) return 0;
			} else {
				if (A[i][j] != 0) return 0;
			}
		}
	}
	return result;
}


int main(void){
	double matrix[N][N] = {
		{1, 0, 0},
		{0, 1, 0},
		{0, 0, 1}
	};

	printf("Matriz identidade: %s\n", (identidade(matrix) ? "SIM": "NÃO"));
	return 0;
}
