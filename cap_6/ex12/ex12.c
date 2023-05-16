#include <stdio.h>
#define N 3



int is_diagonal(int line, int column){return line == column;}


int is_not_identity(double A[][N], int l, int c){
	if (is_diagonal(l,c)) return A[l][c] != 1;
	return A[l][c] != 0;

}



int identidade(double A[][N]){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			if (is_not_identity(A,i,j)) return 0;
		}
	}
	return 1;
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
