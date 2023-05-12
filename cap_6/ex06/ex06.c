#include <stdio.h>
#include <math.h>


float n_root(float n, int expo){
	return pow(n, (1.0/expo));
}


float geometrica(int n, float *v){
	float result = 1;
	for(int i = 0; i < n; i++){
		result *= v[i];
	}
	result = n_root(result, n);
	return result;
}


int main(void){
	float numbers[4] = {1.0,2.0,3.0,4.0};
	int len = 4;

	printf("A média geométria é: %f\n", geometrica(len, numbers));
	return 0;
}
