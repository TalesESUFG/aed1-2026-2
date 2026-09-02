#include <stdio.h>
#include <math.h>

int main() {
	float alt, are;
	scanf("%f %f", &alt, &are);
	float calc = alt*((3*(are*are)*sqrt(3))/2)/3;
	printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", calc);
	return 0;
}
