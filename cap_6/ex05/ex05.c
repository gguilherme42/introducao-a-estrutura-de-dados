#include <stdio.h>



float harmonica(int n, float* v){
	float result = 0;
	for(int i=0; i < n; i++){
		result += 1/v[i];
	}

	return result;
}

int main(void){
	float numbers[5] = {0.5,1.0,1.5,2.0,2.5};
	int len = 5;
	
	printf("A média harmônica é: %f\n", harmonica(len, numbers));

	return 0;
}
