#include <stdio.h>


int how_many_bills(int money, int note){
	int result = 0;
	if (money == 1) return 1;
	if (money >= note) {
		result = money / note;
		return result;
	}
	return result;

}


int main(void){
	int total_100 = 0;
	int total_50  = 0;
	int total_20  = 0;
	int total_10  = 0;
	int total_5   = 0;
       	int total_2   = 0;
	int total_1   = 0;
	unsigned int n;
       	
	printf("Digite um valor em Reais para realizar o saque: ");
	scanf("%d", &n);


	total_100 = how_many_bills(n, 100);
	n -= total_100 * 100;
	total_50  = how_many_bills(n, 50);
	n -= total_50 * 50;
	total_20  = how_many_bills(n, 20);
	n -= total_20 * 20;
	total_10  = how_many_bills(n, 10);
	n -= total_10 * 10;
	total_5   = how_many_bills(n, 5);
	n -= total_5 * 5;
	total_2   = how_many_bills(n, 2);
	n -= total_2 * 2;
	total_1   = how_many_bills(n, 1);

	printf("Notas de R$ 100: %3d\n", total_100);
	printf("Notas de R$  50: %3d\n", total_50);
	printf("Notas de R$  20: %3d\n", total_20);
	printf("Notas de R$  10: %3d\n", total_10);
	printf("Notas de R$   5: %3d\n", total_5);
	printf("Notas de R$   2: %3d\n", total_2);
	printf("Notas de R$   1: %3d\n", total_1);
	
	return 0;
}
