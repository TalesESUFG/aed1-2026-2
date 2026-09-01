#include <stdio.h>

int main() {
	float fah,pol;
	scanf("%f %f", &fah, &pol);
	float cel = 5*(fah-32)/9;
	float mil = pol*25.4;
	printf("O VALOR EM CELSIUS = %.2f\nA QUANTIDADE DE CHUVA E = %.2f\n", cel, mil);
	return 0;
}
