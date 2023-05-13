#include <stdio.h>



float ponderada(int n, float *v, float *w){
	float sum_v_per_w = 0;
	float sum_w = 0;
	
	for (int i=0;i < n; i++){
		sum_v_per_w += v[i] * w[i];
		sum_w += w[i];
	}


	return (sum_v_per_w / sum_w);
}


int main(void){
	float grades[5] = {1.0,1.0,5.0,5.0,9.5};
	float weight[5] = {1.0, 2.0,2.0,5.0,5.0};
	int len = 5;

	printf("A média ponderada é: %f\n", ponderada(len, grades, weight));
	return 0;
}
