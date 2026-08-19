#include <stdio.h>
int main() {
	int entrada;
	float Cometa = 27759;
	float Ano = 725266.25;
	printf("Ano de entrada : ");
	scanf("%d", &entrada);
	if (entrada >= 0 && entrada <= 10000) {
		float Entdias = 0;
		for (int i = 1; i <= entrada; i++) {
			if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
				Entdias += 365;
			} else {
				Entdias += 365.25;
			}
		}
		float check = 0;
		if (Entdias >= Ano) {
			check = Ano;
			while (check < Entdias) {
				check += Cometa;
			}
		} else {
			for (float i = Ano; i > Entdias; i -= Cometa) {
					if (i <= 4382) {
						i = 4382;
						check = i;
						break;
					}
					check = i;
			}
		}
		printf("Ano que tera o proximo cometa : %.f\n", check/365.25);
	} else {
		printf("Erro! Numero maior ou menor que suportado.\n");
	}
	return 0;
}
