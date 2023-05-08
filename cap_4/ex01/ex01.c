#include <stdio.h>
#define PI 3.14159




float volume_cilinder(float r, float h){
	return PI * (r * r) * h;
}


float volume_sphere(float r, float h){
	return (PI * (h * h) * ((3 * r) - h)) / 3;
}

int main(void){
	float r, r_cilinder, h, volume;
	printf("Raio da esfera: ");
	scanf("%f", &r);

	printf("Raio do cilíndro: ");
	scanf("%f", &r_cilinder);
	printf("Altura: ");
	scanf("%f", &h);

	volume = volume_sphere(r, h) - volume_cilinder(r_cilinder, h);
	printf("O volume de uma esfera com um furo cilíndrico é: %f\n", volume);
	
	return 0;
}
