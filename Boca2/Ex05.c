#include <stdio.h>

int main() {
	float a,b,c;
	scanf("%f %f %f", &a, &b, &c);
	float delta = (b*b)-4*(a*c);
	printf("O VALOR DE DELTA E = %.2f\n", delta);
	return 0;
}
