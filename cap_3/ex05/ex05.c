#include <stdio.h>
#include <math.h>


float calculate_position(float p0, float v0, float t, float a){
	return p0 + (v0 * t) + ((a * (pow(t, 2)))/2);
}

float calculate_velocity(float v0, float a, float t){
	return v0 + (a * t);
}

int main(void){
	float initial_position, initial_velocity, time, acceleration;
	
	printf("Posição incial: ");
	scanf("%f", &initial_position);
	printf("Velocidade inicial: ");
	scanf("%f", &initial_velocity);
	printf("Tempo: ");
	scanf("%f", &time);
	printf("Aceleração: ");
	scanf("%f", &acceleration);

	printf("s = %f\n", calculate_position(initial_position, initial_velocity, time, acceleration));
	printf("v = %f\n", calculate_velocity(initial_velocity, acceleration, time));


	return 0;
}
