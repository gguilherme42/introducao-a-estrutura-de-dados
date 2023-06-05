#include <stdio.h>
#include <math.h>


typedef struct point Point;
struct point {
	float x, y;
};

typedef struct circle Circle;
struct circle {
	Point c;
	float r;
};


int intersection(Circle* a, Circle* b){
	float n = pow(a->c.x - b->c.x, 2);
	float m = pow(a->c.y - b->c.y, 2);
	float distance_between_centers = sqrt(n + m);
	float sum_of_radius = a->r + b->r; 

	return distance_between_centers < sum_of_radius;
}


int main(void){
	Circle a1, a2;
	a1.c.x = 3;
	a1.c.y = 3;
	a1.r = 1;

	a2.c.x = 5;
	a2.c.y = 5;
	a2.r = 1;

	printf("Interseção entre a1 ae a1: %s\n", (intersection(&a1,&a2) ? "SIM":"NÃO"));
	return 0;
}
