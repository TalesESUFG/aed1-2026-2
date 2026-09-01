#include <stdio.h>
#define PI 3.14159

int main() {
	float raio,altura;
	scanf("%f %f", &raio, &altura);
	float areaCirculo = PI*(raio*raio);
	float areaLateral = 2*(PI*raio*altura);
	float valor = ((2*areaCirculo)+areaLateral)*100;
	printf("O VALOR DO CUSTO E = %.2f\n", valor);
	return 0;
}
