#include <stdio.h>


int main(void){
	float angle_in_radians, angle_in_degrees, angle_in_minutes, angle_in_seconds;
	printf("Digite um ângulo em radianos: ");
	scanf("%f", &angle_in_radians);
	angle_in_degrees = angle_in_radians * 57.29578;
	angle_in_minutes = angle_in_degrees * 60;
	angle_in_seconds = angle_in_minutes * 60;

	printf("Ângulo em graus: %.2f\n", angle_in_degrees);
	printf("Ângulo em minutos: %.2fm\n", angle_in_minutes);
	printf("Ângulo em segundos: %.2fs\n", angle_in_seconds);
	

	return 0;
}
