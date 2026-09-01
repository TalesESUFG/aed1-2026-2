#include <stdio.h>

int main() {
	int quant, tipos;
	scanf("%d %d", &quant, &tipos);
	int numeros[quant];
	for (size_t i = 0; i < sizeof numeros / sizeof *numeros; i++) {
		int ent;
		scanf("%d", &ent);
		numeros[i] = ent;
	}
	int contar[21] = {0};
	for (int i = 0; i < quant;i++) {
		contar[numeros[i]]++;
	}
	int m = contar[1];
	for (int i = 2; i <= tipos; i++) {
		if (contar[i] < m) {
			m = contar[i];
		}
	}
	printf("%d\n", m);
	return 0;
}