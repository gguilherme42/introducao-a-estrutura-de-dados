#include <stdio.h>
#include <stdlib.h>



int is_lower(char c){return (c >= 'a') && (c <= 'z');}

int is_upper(char c){return (c >= 'A') && (c <= 'Z');}

int is_letter(char c){return is_lower(c) || is_upper(c);}


char * convert(char * str){
	char * result = (char *) malloc(1 * sizeof(char));
	int c = 0;

	for (int i = 0; str[i] != '\0'; i++){
		if (is_letter(str[i])){
			result[c] = str[i];
			c++;
		}
	}


	return result;
}



int main(void){
	char text[] = "# Mat.: 389838-0 DCa b-a)*#@(!)ba(#*@91";
	char * new_text = convert(text);

	printf("%s\n", text);
	printf("%s\n", new_text);
	free(new_text);
	return 0;
}
