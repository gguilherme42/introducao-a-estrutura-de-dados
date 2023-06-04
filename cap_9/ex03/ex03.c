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


Circle* intern_circle(Rectangle * rect){
	Circle* result = (Circle *) malloc(sizeof(Circle));
	result->r = rect->b;
	return result;
}

int main(void){
	Rectangle* new_rect;
	Circle * new_circle;
	Circle a;
	a.r = 5;

	new_rect = circumscript_rect(&a, 8);
	new_circle = intern_circle(new_rect);	
	
	printf("h: %f | b: %f\n", new_rect->h, new_rect->b);
	printf("r: %f\n", new_circle->r);
	free(new_rect);
	free(new_circle);
	return 0;
}
