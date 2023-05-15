#include <stdio.h>
#define N 2


int triangular_inferior(double A[][N]){
	int result = 1;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			if (i == j && A[i][j] != 0) return 0;
		}
	}
	return result;

}

int main(void){
	double matrix[N][N] = {{0,0},{1,0}};

	printf("Matriz quadrada inferior: %d\n", triangular_inferior(matrix));
	return 0;
}


