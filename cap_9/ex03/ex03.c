#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct rectangle Rectangle;
typedef struct circle Circle;
struct circle{
	float r;
};
struct rectangle{
	float h;
	float b;
};


Rectangle* circumscript_rect(Circle* c, float h){
	Rectangle* result = (Rectangle *) malloc( sizeof(Rectangle));
	result->h = h;
	float d = c->r * 2;

	result->b = sqrt((d * d) - (result->h * result->h));
	return result;

}


int main(void){
	Rectangle* test;
	Circle a;
	a.r = 5;

	test = circumscript_rect(&a, 8);	
	printf("h: %f | b: %f\n", test->h, test->b);
	free(test);
	return 0;
}
