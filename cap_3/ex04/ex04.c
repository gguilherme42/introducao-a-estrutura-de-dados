#include <stdio.h>
#include <math.h>

int main(void){
	float r, a, x, y;
	printf("Raio: ");
	scanf("%f", &r);

	printf("Ângulo: ");
	scanf("%f", &a);
	
	x = r * cos(a);
       	y = r * sin(a);
	
	printf("Coordenadas cartesianas:\n");
	printf("x: %f\n", x);
	printf("y: %f\n", y);


	return 0;
}
