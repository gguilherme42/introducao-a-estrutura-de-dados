#include <stdio.h>


typedef struct ponto Ponto;
struct ponto {
	float x;
	float y;
};



int is_in_rectangle(Ponto * v1, Ponto * v2, Ponto *p){
	int is_in_y = (p->y > v1->y) && (p->y < v2->y);
	int is_in_x = (p->x > v1->x) && (p->x < v2->x);
	return is_in_x && is_in_y;
}


int main(void){
	Ponto vertex_1, vertex_2, p;
	vertex_1.x = 1.0;
	vertex_1.y = 1.0;

	vertex_2.x = 4.0;
	vertex_2.y = 3.0;

	p.x = 2.0;
	p.y = 2.0;

	char * msg = is_in_rectangle(&vertex_1, &vertex_2, &p) ? "SIM" : "NÃO";
	
	printf("Está no retângulo: %s\n", msg);
	return 0;
}
