#include <stdio.h>

int main() {
	int quant;
	scanf("%d", &quant);
	int numeros[quant];
	for (size_t i = 0; i < sizeof numeros / sizeof *numeros; i++) {
		int ent;
		scanf("%d", &ent);
		numeros[i] = ent;
	}
	for (int i = 0; i < quant; i++) {
		int valor = numeros[i];
		int rev = 0;
		while (numeros[i] > 0) {
			rev = rev * 10 + (numeros[i] % 10);
			numeros[i] = numeros[i]/10;
		}
		if (rev == valor) {
			printf("yes ");
		} else {
			printf("no ");
		}
	}
	return 0;
}
