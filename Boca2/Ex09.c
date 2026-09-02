#include <stdio.h>

int main() {
	int h, m, s;
	scanf("%d %d %d", &h, &m, &s);
	int calc = (h*3600)+(m*60)+s;
	printf("O TEMPO EM SEGUNDOS E = %d\n", calc);
	return 0;
}
