#include <stdio.h>


int conta_ocorrencias(char* s, char c){
	int result = 0;
	for (int m = 0; s[m] != '\0'; m++){
		if (s[m] == c) result++;
	}
	return result;
}


int main(void){
	char city[] = "Rio de Janeiro";
	char letter = 'a';

	printf("Total de ocorrências: %d\n", conta_ocorrencias(city, letter));
	return 0;
}
