#include <stdio.h>


int abs(int n){return n < 0 ? n * (-1): n;}


int is_result_positive(int a, int b){
	if (a < 0 && b < 0) return 1;
	if (a >= 0 && b < 0) return 0;
	if (a < 0 && b >= 0) return 0;
	return 1;
}


int multiply(int a, int b){
	int result = 0;
	if (a == 0 || b == 0) return 0;
	if (b == 1) return a;
	if (a == 1) return b;
	
	int cup = abs(b);
	int mug = abs(a);
	for (int i = 0; i < cup; i++){
		result += mug;
	}

	result = is_result_positive(a, b) ? result : -result;

	return result;
	
}


int sub(int a, int b){
	int result = 0;
	if (a == 0) return b;
	if (b == 0) return a;
	if (a == b) return 0;
	
	if (a > b){
		while ((result + b) < a){
			result++;
		}
	} else {
		while ((result + a) < b){
			result++;
		}
		result = -result;
	}
	
	return result;

}

int main(void){
	int n1, n2;
	printf("Valor 1: ");
	scanf("%d", &n1);
	printf("Valor 2: ");
	scanf("%d", &n2);

	printf("%d x %d = %d\n", n1, n2, multiply(n1,n2));
	printf("%d - %d = %d\n", n1, n2, sub(n1,n2));

	return 0;
}
