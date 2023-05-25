#include <stdio.h>
#include <stdlib.h>


int len(char * str){
	int result = 0;
	for(int i = 0; str[i] != '\0'; i++){
		result++;
	}
	return result;
}

char * remove_sufix(char * str, int letters_to_remove){
	int len_result = (len(str) - 1) - letters_to_remove;
	char * result = (char *) malloc(len_result * sizeof(char));

	for(int i = 0; i < len_result; i++){
		result[i] = str[i];
	}

	return result;
}


int main(void){
	char text[] = "Rio de Janeiro";
	int n = 7;
	char * new_text = remove_sufix(text, n);

	printf("%s\n", text);
	printf("%s\n", new_text);
	free(new_text);
	return 0;
}
