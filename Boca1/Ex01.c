#include <stdio.h>

int main() {
	int entrada;
	float Cometa = 27759;
	float Ano = 725266.25;

	if (scanf("%d", &entrada) == 1 && entrada >= 0 && entrada <= 10000) {
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
			while ((check / 365.25) <= entrada) {
				check += Cometa;
			}
		} else {
			check = Ano;
			while ((check / 365.25) > entrada) {
				check -= Cometa;
			}
			check += Cometa;
		}
		printf("%.f\n", check / 365.25);
	}
	return 0;
}
