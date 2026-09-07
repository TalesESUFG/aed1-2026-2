#include <stdio.h>

int main() {
	float pf, pd, pi;
	scanf("%f %f %f", &pf, &pd, &pi);
	float s = pf + ((pd/100)*pf) + ((pi/100)*pf);
	printf("O VALOR DO CARRO E = %.2f", s);
}
