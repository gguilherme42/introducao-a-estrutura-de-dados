#include <stdio.h>
#include <stdlib.h>

float** create_square_bottom_matrix(int len){
	float ** result = (float **) malloc(len * sizeof(float));
	for(int i = 0; i <= len; i++){
		result[i] = (float *) malloc((i + 1) * sizeof(float));
	}

	for (int i = 0; i < len; i++){
		for (int j = 0; j < len; j++){
			if (i >= j) result[i][j] = 0.0;
		}
	
	}

	return result;

}




void print_m(int len,float** m){
	printf("[");
	for (int i =0; i < len; i++){
		printf("[");
		for (int j=0; j < len; j++){
			if ((j + 1) == len) printf("%.2f", m[i][j]);
			else printf("%.2f, ", m[i][j]);
		}
		printf("]\n");
	}
	printf("]\n");

}



int main(void){
	int l = 3;
	float ** matrix_A;

	matrix_A = create_square_bottom_matrix(l);
	//print_m(l, matrix_A);
	return 0;
}
