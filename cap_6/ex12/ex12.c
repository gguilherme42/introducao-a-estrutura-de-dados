#include <stdio.h>
#define N 3



int is_diagonal(int line, int column){return line == column;}


int is_not_identity(const double A[][N], int l, int c){
	if (is_diagonal(l,c)) return A[l][c] != 1;
	return A[l][c] != 0;

}



int is_identity(const double A[][N]){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			if (is_not_identity(A,i,j)) return 0;
		}
	}
	return 1;
}


void print_identity_check(const double A[][N]){
	printf("Matriz identidade: %s\n", (is_identity(A) ? "SIM": "NÃO"));
}


int main(void){
	double matrix[N][N] = {
		{1, 0, 0},
		{0, 1, 0},
		{0, 0, 1}
	};
	
	print_identity_check(matrix);
	return 0;
}
