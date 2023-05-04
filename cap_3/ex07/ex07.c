#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int is_rock(int op){
	return op == 0;
}

int is_paper(int op) {
	return op == 1;
}

int is_scissor(int op){
	return op == 2;
}

int is_draw(int op1, int op2){
	return op1 == op2;
}

int do_you_win(int user_op, int comp_op) {
	if (is_rock(user_op)) return is_scissor(comp_op);
	if (is_paper(user_op)) return is_rock(comp_op);
	if (is_scissor(user_op)) return is_paper(comp_op);
	return 0;
}

void print_win_or_lose(int user_op, int comp_op){
	if (is_draw(user_op, comp_op)){
		printf("Você ganhou!\n");
	}
	else if (do_you_win(user_op, comp_op)){
		printf("Você ganhou!\n");
	} else {
		printf("Você perdeu!\n");
	}
}

int is_valid_input(int op){
	return is_rock(op) || is_paper(op) || is_scissor(op); 
}

int main(void){
	int computer_choice, user_choice;
	
	printf("Escolha [0] Pedra [1] papel [2] tesoura: ");
	scanf("%d", &user_choice);

	srand(time(0));
	computer_choice = rand() % 3;

	if (is_valid_input(user_choice)) {
		print_win_or_lose(user_choice, computer_choice);

	} else {
		printf("opção inválida!\n");
	}


	return 0;
}
