#include <stdio.h>
#include <stdlib.h>

float** create_square_top_matrix(int len){
	float ** result = (float **) malloc(len * sizeof(float));

	int c  = len;
	for(int i = 0; i <= len; i++){
		result[i] = (float *) malloc(c * sizeof(float));
		c--;
	}
	

	for (int i = 0; i < len; i++){
		for (int j = 0; j < len; j++){
			if (i <= j) result[i][j] = 0.0;
		}
	
	}

	return result;

}



float access_matrix(int i, int j, float** m){
	if (i <= j) return m[i][j];
	return 0;
}


void print_m(int len,float** m){
	printf("[\n");
	for (int i =0; i < len; i++){
		printf("\t[");
		for (int j=0; j < len; j++){
			if ((j + 1) == len) printf("%.2f", access_matrix(i, j, m));
			else printf("%.2f, ", access_matrix(i,j,m));
		}
		printf("]\n");
	}
	printf("]\n");

}



void assign_to_matrix(int i, int j, float value, float ** m){
	m[i][j] = value;

}


void free_matrix(int len, float ** m){
	free(m);
}


int main(void){
	int l = 3;
	float ** matrix_A;

	matrix_A = create_square_top_matrix(l);
	assign_to_matrix(0,1,22, matrix_A);
	assign_to_matrix(0,2,44, matrix_A);
	assign_to_matrix(1,2,55, matrix_A);
	print_m(l, matrix_A);
	free_matrix(l, matrix_A);
	return 0;
}
