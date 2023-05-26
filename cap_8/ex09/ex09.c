#include <stdio.h>
#include <stdlib.h>


int len(char * str){
	int result = 0;
	for (int i = 0; str[i] != '\0'; i++){
		result++;
	}
	return result;
}

char * concat(char * s1, char * s2, char sep){
	int length = len(s1) + len(s2) + 1;
	
	char * result = (char *) malloc(length * sizeof(char));

	int i;
	int c;
	for (i = 0; s1[i] != '\0'; i++){
		result[i] = s1[i];
		printf("R{%d}: %c\n", i, result[i]);
	}
	c = i;
	printf("C = %d\n", c);
	result[c] = sep;

	for(i = 0; s2[i] != '\0'; i++){
		c++;
		result[c] = s2[i];
	}

	return result;
}


int main(void){
	char text_a[] = "ex";
	char text_b[] = "aluno";
	char sep = '-';
	char *  new_text = concat(text_a, text_b, sep);

	printf("%s\n", new_text);
	printf("A: %d, B: %d, RESULT: %d\n", len(text_a), len(text_b), len(new_text));
	free(new_text);
	return 0;
}
