#include <stdio.h>
#define N 3



int is_diagonal(int line, int column){return line == column;}



int identidade(double A[][N]){
	int is_not_identity(int line, int column){
		if (is_diagonal(line,column)) return A[line][column] != 1;		
		return A[line][column] != 0;
	}


	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			if (is_not_identity(i,j)) return 0;
		}
	}
	return 1;
}


int main(void){
	double matrix[N][N] = {
		{1, 0, 2},
		{0, 1, 0},
		{0, 0, 1}
	};

	printf("Matriz identidade: %s\n", (identidade(matrix) ? "SIM": "NÃO"));
	return 0;
}
