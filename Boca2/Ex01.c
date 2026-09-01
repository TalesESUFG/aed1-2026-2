#include <stdio.h>
#define ANO 365.25

int main() {
	int idade;
	scanf("%d", &idade);
	float mult = ANO*idade*24*60*60;
	printf("O CORACAO BATEU %.2f VEZES\n",mult);
	return 0;
}
