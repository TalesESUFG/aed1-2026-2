#include <stdio.h>

int main() {
	float x;
	scanf("%f", &x);
	printf("%.1f00000\n", x);
	printf("%.2f0000\n", x);
	printf("%.3f000\n", x);
}
