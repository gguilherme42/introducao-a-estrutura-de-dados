#include <stdio.h>

int main(void){
	float gallon_price, conversion_rate, liter_price;
	float gallon_in_liters = 3.7854;
	
	printf("Informe o preço do galão de gasolina (em dólares): ");
	scanf("%f", &gallon_price);
	
	printf("Informe a taxa de conversão do dólar para o real: ");
	scanf("%f", &conversion_rate);

	gallon_price = gallon_price * conversion_rate; // price in Dollar to Real

	liter_price = gallon_price / gallon_in_liters;

	printf("O preço do litro de  gasolina em Reais é: R$%.2f\n", liter_price);
	return 0;
}
