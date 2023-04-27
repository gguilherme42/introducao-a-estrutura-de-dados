#include <stdio.h>
#include <math.h>


int main(void){
	float r;
	float pi = 3.14;
	printf("Digite o raio da esfera: ");
	scanf("%f", &r);

	float sphere_volume = (4.0/3.0) * pi* pow(r, 3);
	
	printf("O volume da esfera é: %f"\n, sphere_volume);

	return 0;
}
