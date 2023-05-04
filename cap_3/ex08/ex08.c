#include <stdio.h>



void print_second_options(int op){
	if (op == 0){
		printf("\t1. Libra → Quilograma\n");
		printf("\t2. Quilograma → Libra\n");
		printf("\t3. Onça → Grama\n");
		printf("\t4. Grama → Onça\n");
	} else if (op == 1) {
		printf("\t1. Galão → Litro\n");
		printf("\t2. Litro → Galão\n");
		printf("\t3. Onça → Mililitro\n");
		printf("\t4. Mililitro → Onça\n");
	
	} else {
		printf("\t1. Milha → Quilômetro\n");
		printf("\t2. Quilômetro → Milha\n");
		printf("\t3. Jardas → Metro\n");
		printf("\t4. Metros → Jardas\n");
	
	}
}


void print_options(int op) {
		if (op == 0) {
			printf("%d. Peso\n", op);
			print_second_options(op);
		} else if (op == 1) {
			printf("%d. Volume\n", op);
			print_second_options(op);
		} else {
			printf("%d. Comprimento\n", op);
			print_second_options(op);
		}
}



void print_menu(void){
	for (int i=0; i < 3; i++) {
		print_options(i);
		
	}
}

int main(void){
	int user_option;
	print_menu();


	return 0;
}
