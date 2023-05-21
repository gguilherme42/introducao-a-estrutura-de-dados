#include <stdio.h>


int abs(int n){return n < 0 ? -n: n;}

int is_result_positive(int a, int b){return (a < 0) ^ (b < 0) ? 0 : 1;}


int multiply(int a, int b){
	if (a == 0 || b == 0) return 0;
	if (b == 1) return a;
	if (a == 1) return b;
	
	int result = 0;
	int absB = abs(b);
	int absA = abs(a);
	for (int i = 0; i < absB; i++){
		result += absA;
	}

	result = is_result_positive(a, b) ? result : -result;

	return result;
	
}


int sub(int a, int b){
	int result = a + (-b);
	return result;

}


int div(int a, int b){
	if (a == 0 || b == 0 || b > a) return 0;
	if (b == 1) return a;
	if (b == -1) return -a;
	
	int result = 1;
	int absA = abs(a);
	int absB = abs(b);
	while (multiply(result, absB) < absA ){
		result++;
	}

	return is_result_positive(a, b) ? result : - result;

}


int my_pow(int a, int b){
	if (a == 0) return 0;
	if (a == 1) return 1;
	if (b == 0) return 1;
	if (b == 1) return a;
	if (b < 0) return 0;

	int result = a;
	int absB = abs(b);
	for (int i = 1; i < absB; i++){
		result = multiply(result, a);
	}

	return result;
}

int main(void){
	int n1 = 0;
	int n2 = 0;

	printf("Valor 1: ");
	scanf("%d", &n1);
	printf("Valor 2: ");
	scanf("%d", &n2);

	printf("%d x %d = %d\n", n1, n2, multiply(n1,n2));
	printf("%d - %d = %d\n", n1, n2, sub(n1,n2));
	printf("%d / %d = %d\n", n1, n2, div(n1, n2));
	printf("%d ^ %d = %d\n", n1, n2, my_pow(n1, n2));

	return 0;
}
