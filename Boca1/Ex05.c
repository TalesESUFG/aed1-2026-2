#include <stdio.h>

int main() {
	int quant;
	char letras[] = {'A', 'C', 'G', 'T'};
	scanf("%d", &quant);
	int numeros[quant];
	for (size_t i = 0; i < sizeof numeros / sizeof *numeros; i++) {
		int ent;
		scanf("%d", &ent);
		numeros[i] = ent;
		char res[50];
		int add = 0;
		while (ent > 0) {
			int r = ent % 4;
			res[add] = letras[r];
			add++;
			ent /= 4;
		}
		for (int j = add-1; j > -1; j--) {
			printf("%c", res[j]);
		}
		printf("\n"); // Lembrete para add isso pro boca
	}
	return 0;
}
