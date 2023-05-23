#include <stdio.h>


int is_lower(char c){return (c >= 'a') && (c <= 'z');}

int is_upper(char c){return (c >= 'A') && (c <= 'Z');}

int is_a_letter(char c){return is_lower(c) || is_upper(c);}

char shift_str(char c){
	if (is_a_letter(c)){
		char first_letter = is_lower(c) ? 'a' : 'A';
		char last_letter = is_lower(c) ? 'z' : 'Z';
		char oposite = last_letter - (c - first_letter);

		return oposite; 
	}
	return c;
}


void opposite_str(char *str){
	for(int i = 0; str[i] != '\0'; i++){
		str[i] = shift_str(str[i]);
	}	
}


int main(void){
	char text[] = "a b c d e f g h i j k l m n o p q r s t u v w x y z";

	printf("%s\n", text);
	opposite_str(text);
	printf("%s\n", text);
	return 0;
}
