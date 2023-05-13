#include <stdio.h>


int testa_PA(int n, int *v){
	int k = v[1] - v[0];
	int a2 = v[0] + (2 * k);

	int result = v[2] == a2 ? k : 0;

	return result;
}


int main(void){
	int numbers[3] = {2, -3, 34};
	int len = 3;

	printf("PA: %d\n", testa_PA(len, numbers));
	return 0;
}
