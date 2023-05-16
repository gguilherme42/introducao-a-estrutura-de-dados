#include <stdio.h>
#define N 3


int triangular_inferior(double A[][N]){
	int result = 1;
	
	int top_values_are_not_zero(int line, int column){
		return (column > line && A[line][column] != 0);
	}

	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			if (top_values_are_not_zero(i,j)) return 0; // valores acima da diagonal diferentes de 0
		}
	}
	return result;

}

int main(void){
	double matrix[N][N] = {
				{0, 0, 0},
				{1, 0, 2},
				{1, 4, 0}};


	printf("Matriz quadrada inferior: %s\n", (triangular_inferior(matrix)? "SIM": "NÃO"));
	return 0;
}


