#include <stdio.h>
#include <math.h>


double pot(double x, int k){
	if (k == 1) return x;
	return pot(x, k - 1) + pot(x, k - 1);
}

int main(void){
	double a = 2;
	int p = 4;
	
	double test = pot(a,p);
	double test_libc = pow(a,p);

	printf("pot: %lf\npow: %lf\n", test, test_libc);

	return 0;
}
