#include <stdio.h>


float abs_number(float n){
	float result = n;
	if (result < 0) {
		return result * (-1);
	} 
	return result;
}


int convert_to_hour(float n){
	if (n > 0) {
		return n / (60 * 60);
	}
	return 0;
}

int convert_to_minute(float n){
	int result = 0;
	float time = n - (convert_to_hour(n) * (60 * 60)); // tempo do evento menos às horas já calculadas
	if (time  > 0){
		result = time / 60;
		return result;
	} 
	return result;
}

float convert_to_second(float n){
	float result = 0.0;
	float time = n - ((convert_to_hour(n) * (60*60)) + (convert_to_minute(n) * 60));
	if (time > 0){
		result = time;
		return result;
	}
	return result;
}


int main(void){
	unsigned int hour, minute;
	float event_in_seconds;
	float second = 0.0;
	
	printf("Informe o número de segundos transcorridos em um evento qualquer: ");
	scanf("%f", &event_in_seconds);
	
	event_in_seconds = abs_number(event_in_seconds);

	hour = convert_to_hour(event_in_seconds);
	minute = convert_to_minute(event_in_seconds);
	second = convert_to_second(event_in_seconds);

	printf("%02u:%02u:%05.2f\n", hour, minute, second);

	

	return 0;
}
