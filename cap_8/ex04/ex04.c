#include <stdio.h>


int is_lower(char c){return (c >= 'a') && (c <= 'z');}

int is_upper(char c){return (c >= 'A') && (c <= 'Z');}

int is_a_letter(char c){return is_lower(c) || is_upper(c);}



char shift_c(char c){
	char result = c;
	if (is_a_letter(result)){
		if (is_lower(result)){
			if (result == 'z') return 'a';
			result = result + 1;
			return result;
		} else {
			if (result == 'Z') return 'A';
			result = result + 1;
			return result;
		
		}
	}
	return result;
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
