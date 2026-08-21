#include <stdio.h>

int main() {
	int limite, E1, E2, mat = 0;
	char sinal;
	scanf("%d", &limite);
	scanf("%d %c %d", &E1, &sinal, &E2);
	if (sinal == '+') {
		mat = E1 + E2;
	} else if (sinal == 'x') {
		mat = E1 * E2;
	}
	if (mat > limite) {
		printf("overflow\n");
	} else {
		printf("no overflow\n");
	}
	return 0;
}
