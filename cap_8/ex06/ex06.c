#include <stdio.h>

int len_str(char * str){
	int result = 0;

	for (int i = 0; str[i] != '\0'; i++){
		result++;
	}
	return result;
}


char* copy_str(char *str){
	char * result;
	
	int i;
	for (i = 0; str[i] != '\0'; i++){
		result[i] = str[i];
	}

	result[i] = '\0';

	return result;
}


void rotate_str(char * str){
	char * cup = copy_str(str);
	int len = len_str(str);
	int is_next_char_out_of_range(int index){return index + 1 >= len;}
	
	for (int i=0; cup[i] != '\0'; i++) {
		if (is_next_char_out_of_range(i)) {
			str[0] = cup[i];
		} else {
			str[i + 1] = cup[i];
		}
	}
}

int main(void){
	char text[] = "casa";

	printf("%s\n", text);
	rotate_str(text);
	printf("%s\n", text);
	//printf("TESTE: %d\n", len_str(text));
	return 0;
}
