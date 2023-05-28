#include <stdio.h>


typedef struct point Vector;
struct point {
	float x;
	float y;
	float z;
};


float escalar(Vector * v1, Vector * v2){
	return (v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z);
	

}

int main(void){
	Vector v1, v2;
	v1.x = 3.0;
	v1.y = 4.0;
	v1.z = 6.0;
	v2.x = 2.42;
	v2.y = 4.3;
	v2.z = -6.0;

	printf("Produto escalar: %.2f\n", escalar(&v1, &v2));


}
