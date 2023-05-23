#include <stdio.h>


int is_lower(char c){
	return (c >= 'a') && (c <= 'z');
}

int is_upper(char c){
	return (c >= 'A') &&  (c <= 'Z');
}

int is_a_letter(char c){
	return is_lower(c) || is_upper(c);
}

char my_upper(char c){
	char result = c;
	if (is_lower(c)) result += 'A' - 'a';
	return result;	
}


int is_a_upper_vogal(char c){
	return (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U');
}

int is_a_vogal(char l){
	return is_a_letter(l) && is_a_upper_vogal((my_upper(l)));

}


int conta_vogais(char* str){
	int result = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (is_a_vogal(str[i])) result++;
	}

	return result;
}



int main(void){
	char word[] = "Abacaxi";

	printf("Na palavras %s há %d vogais\n", word, conta_vogais(word)); 
	return 0;
}
