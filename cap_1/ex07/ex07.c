#include <stdio.h>


int main(){
	float celsius;
	float fahrenheit;

	printf("Digite a temperatura em grasu celsius: ");
	scanf("%f", &celsius);
	
	fahrenheit = (1.8 * celsius) + 32;
	
	printf("A temperatura em fahrenheit é: %f\n", fahrenheit);

	return 0;
}
