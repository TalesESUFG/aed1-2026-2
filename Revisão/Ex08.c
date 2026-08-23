#include <stdio.h>

int primo(unsigned long long n){
	if (n <= 1) return 0;
	if (n <= 3) return 1;
	if (n % 2 == 0 || n % 3 == 0) return 0;
	for (unsigned long long i = 5; i <= n / i; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int q;
	if (scanf("%d", &q) != 1) return 0;
	unsigned long long num[100];
	for (int i = 0; i < q; i++) {
		scanf("%llu", &num[i]);
	}
	for (int i = 0; i < q; i++) {
		if (primo(num[i])) {
			printf("primo\n");
		} else {
			printf("composto\n");
		}
	}
	return 0;
}
