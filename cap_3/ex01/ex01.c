#include <stdio.h>


int highest_number(int a1, int a2, int a3){
	if (a1 >= a2 && a1 >= a3) return a1;
	if (a2 >= a1 && a2 >= a3) return a2;
	return a3;
}


int main(void){
	int n1, n2, n3;
	printf("Digite o número 1: ");
	scanf("%d", &n1);
	printf("Digite o número 2: ");
	scanf("%d", &n2);
	printf("Digite o número 3: ");
	scanf("%d", &n3);

	printf("O maior número é : %d\n", highest_number(n1, n2, n3));

}
