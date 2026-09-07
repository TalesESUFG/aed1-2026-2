#include <stdio.h>

int main() {
	int  e;
	scanf("%d", &e);
	int div = (((e/100) % 10) + (((e/10) % 10)*3) + (((e/1) % 10)*5)) % 7;
	printf("O NOVO NUMERO E = %d%d\n", e, div); 
	return 0;
}
