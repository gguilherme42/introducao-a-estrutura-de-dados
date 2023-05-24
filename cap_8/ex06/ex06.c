#include <stdio.h>
#include <stdlib.h>

int len_str(char * str){
	int result = 0;

	for (int i = 0; str[i] != '\0'; i++){
		result++;
	}
	return result;
}


void copy_str(char * dest, char * orig){

	int i;
	for (i = 0; orig[i] != '\0'; i++){
		dest[i] = orig[i];
	}
	dest[i] = '\0';
}


void rotate_str(char * str){
	int len = len_str(str);
	char * cup = (char *) malloc(len * sizeof(char));
	
	if (cup == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

	copy_str(cup, str);
	int is_next_char_out_of_range(int index){return index + 1 >= len;}

	for (int i=0; cup[i] != '\0'; i++) {	
		if (is_next_char_out_of_range(i)) {
			str[0] = cup[i];
		} else {
			str[i + 1] = cup[i];
		}
	}

	free(cup);
}

int main(void){
	char text[] = "casa";

	printf("%s\n", text);
	rotate_str(text);
	printf("%s\n", text);;
	return 0;
}
