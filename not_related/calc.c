#include <stdio.h>


int abs(int n){return n < 0 ? -n: n;}

int is_result_positive(int a, int b){return (a < 0) ^ (b < 0) ? 0 : 1;}


int multiply(int a, int b){
	if (a == 0 || b == 0) return 0;
	if (b == 1) return a;
	if (a == 1) return b;
	
	int result = 0;
	int cup = abs(b);
	int mug = abs(a);
	for (int i = 0; i < cup; i++){
		result += mug;
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
	while (multiply(result, b) != a ){
		result++;
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
	printf("%d / %d = %d\n", n1, n2, div(n1, n2));

	return 0;
}
