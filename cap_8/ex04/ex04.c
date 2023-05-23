#include <stdio.h>


int is_lower(char c){return (c >= 'a') && (c <= 'z');}

int is_upper(char c){return (c >= 'A') && (c <= 'Z');}

int is_a_letter(char c){return is_lower(c) || is_upper(c);}

char next_letter(char c){
	char first_char = is_lower(c) ? 'a' : 'A';
	char next = c + 1;
	if (((c - first_char) + 1) < 25) return next;
	return first_char;
}




char shift_c(char c){
	if (is_a_letter(c)) return next_letter(c);
	return c;
}


void shift_string(char * str){
	for(int i=0; str[i] != '\0'; i++){
		str[i] = shift_c(str[i]);
	}

}


int main(void){
	char text[] = "Casa CAZA ZZZZZ zzzzz BBBBB";

	printf("%s\n", text);
	shift_string(text);
	printf("%s\n", text);

	return 0;
}
