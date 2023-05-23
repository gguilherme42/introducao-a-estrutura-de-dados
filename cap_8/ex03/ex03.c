#include <stdio.h>




int is_upper(char c){return (c >= 'A') && (c <= 'Z');}

int is_lower(char c){return (c >= 'a') && (c <= 'z');}

int is_a_letter(char c){return is_lower(c) || is_upper(c);}

char upper_to_lower(char c){
	if (is_upper(c)) return c + ('a' - 'A');
	return c;
}


void to_lower(char* str){
	for (int i=0; str[i] != '\0'; i++) {
		if (is_a_letter(str[i])) str[i] = upper_to_lower(str[i]);
	}

}



int main(void){
	char text[] = "COGITO, ergO Sum";

	printf("%s\n", text);
	to_lower(text);
	printf("%s\n", text);
	return 0;
}
