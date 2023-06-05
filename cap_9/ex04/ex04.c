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


float length(int n, Point* v){
	float result = 0;
	for(int i = 0; i < (n - 1); i++) {
		result+= sqrt(pow(v[i].x - v[i + 1].x, 2) + pow(v[i].y - v[i + 1].y, 2));
	}
	return result;
}

int main(void){
	Point v_point[6] = {{1,1}, {2,2}, {3,1}, {4,0}, {6,2}, {8,1}};
	Circle a1 = {{3, 3}, 1};
	Circle a2;

	a2.c.x = 5;
	a2.c.y = 5;
	a2.r = 1;

	printf("Interseção entre a1 ae a1: %s\n", (intersection(&a1,&a2) ? "SIM":"NÃO"));
	printf("Comprimento da linha poligonal: %.2f\n", length(6, v_point));
	return 0;
}
