#include <stdio.h>

int main() {
	int entrada1, entrada2;
	int reverso1 = 0, reverso2 = 0;
	scanf("%d %d", &entrada1, &entrada2);
		while (entrada1 > 0) {
			reverso1 = reverso1 * 10 + (entrada1 % 10);
			entrada1 = entrada1/10;
		}
		while (entrada2 > 0) {
			reverso2 = reverso2 * 10 + (entrada2 % 10);
			entrada2 = entrada2/10;
		}	
		if (reverso1 > reverso2) {
			printf("%d\n", reverso1);
		} else {
			printf("%d\n", reverso2);
		}
	return 0;
}
