#include <stdio.h>
#include <stdlib.h>


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


int my_div(int a, int b){
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


void menu(){
	system("clear");
	printf("-------------------------------------------------------\n");
	printf("\t\t\tCALCULADORA\n");
	printf("-------------------------------------------------------\n");
	printf("\t[1] Adição\n");
	printf("\t[2] Subtração\n");
	printf("\t[3] Multiplicação\n");
	printf("\t[4] Divisão\n");
	printf("\t[5] Exponenciação\n");
	printf("\t[0] SAIR\n");

}




void operation(int op){
	int a, b;
	printf("- Valor 1: ");
	scanf("%d", &a);
	printf("- Valor 2: ");
	scanf("%d", &b);
	
	
	if (op == 1) printf("\t%d + %d = %d\n", a, b, (a + b));
	if (op == 2) printf("\t%d x %d = %d\n", a, b, multiply(a, b));
	if (op == 3) printf("\t%d - %d = %d\n", a, b, sub(a, b));
	if (op == 4) printf("\t%d / %d = %d\n", a, b, my_div(a, b));
	if (op == 5) printf("\t%d ^ %d = %d\n", a, b, my_pow(a, b));

};


int is_a_valid_operation(int op){
	return op == 1 || op == 2 || op == 3 || op == 4 || op == 5 || op == 0;
}


int input_operation(){
	int n = 0;	
	while (1){
		printf("- Operação: ");
		scanf("%d", &n);

		if (is_a_valid_operation(n)) {
			if (n == 0) exit(1);
			return n;
		}

		printf("\tOPERAÇÃO INVÁLIDA\n");

	}
}


int main(void){
	int op;
	int numbers[5];
	
	menu();
	op = input_operation();
	operation(op);

	return 0;
}
