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



float convert_libre_to_kilogram(float l) {return l * 0.4536;}
float convert_kilogram_to_libre(float q) {return q / 0.4536;}
float convert_onca_to_gram(float o) {return o * 28.3495;}
float convert_gram_to_onca(float g) {return g / 28.3495;}

float weight_option(int op, float n) {
	if (op == 1) return convert_libre_to_kilogram(n);
	if (op == 2) return convert_kilogram_to_libre(n);
	if (op == 3) return convert_onca_to_gram(n);
	if (op == 4) return convert_gram_to_onca(n);
	return 0;
}

float convert_gallon_to_liter(float g) {return g * 3.7854;}
float convert_liter_to_gallon(float l) {return l / 3.7854;}
float convert_onca_to_mililiter(float o) {return o * 29.5735;}
float convert_mililiter_to_onca(float m) {return m / 29.5735;}

float volume_option(int op, float n){
	if (op == 1) return convert_gallon_to_liter(n);
	if (op == 2) return convert_liter_to_gallon(n);
	if (op == 3) return convert_onca_to_mililiter(n);
	if (op == 4) return convert_mililiter_to_onca(n);
	return 0;
}


float convert_mile_to_kilometer(float m) {return m * 1.6093;}
float convert_kilometer_to_mile(float k) {return k / 1.6093;}
float convert_jarda_to_meter(float j) {return j * 0.9144;}
float convert_meter_to_jarda(float m) {return m / 0.9144;}

float length_option(int op, float n){
	if (op == 1) return convert_mile_to_kilometer(n);
	if (op == 2) return convert_kilometer_to_mile(n);
	if (op == 3) return convert_jarda_to_meter(n);
	if (op == 4) return convert_meter_to_jarda(n);
	return 0;
}

int main(void){
	float value;
	int first_op, second_op;
	printf("Digite o valor: ");
	scanf("%f", &value);

	print_menu();
	printf("1ª opção: ");
	scanf("%d", &first_op);

	print_second_options(first_op);
	printf("2ª opção: ");
	scanf("%d", &second_op);

	if (first_op == 1) {
		value = weight_option(second_op, value);
	} else if (first_op == 2) {
		value = volume_option(second_op, value);
	} else if (first_op == 3) {
		value = length_option(second_op, value);
	}


	
	printf("O valor convertido é: %f\n", value);
	

	return 0;
}

