#include <stdio.h>
#include <math.h>

void raizes(double a, double b, double c, double * px1, double * px2){
	double delta = (b*b) - (4 * a * c);
	if (delta > 0) {
		*px1 = (- b + delta) / (2*a);
		*px2 = (- b - delta) / (2 * a);	
	} else if (delta == 0) {
		*px1 = - b / (2 * a);
	}
}


int main(void){
	double a, b, c, px1, px2;
	printf("Valor de a: ");
	scanf("%lf", &a);
	printf("Valor de b: ");
	scanf("%lf", &b);
	printf("Valor de c: ");
	scanf("%lf", &c);
	
	raizes(a, b, c, &px1, &px2);
	
	printf("x1: %lf\nx2: %lf\n", px1, px2);

	return 0;
}
