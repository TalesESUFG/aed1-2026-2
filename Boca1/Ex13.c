#include <stdio.h>
typedef long long int LLI;

LLI fibo(LLI x) {
    if (x < 1) {
        return 0;
    }
    if (x <= 2) {
        return 1;
    }
    return fibo(x-1) + fibo(x-2);
}
int main() {
    int k, c;
    scanf("%d", &k);
    LLI resp[k];
    for (int i = 0; i < k; i++) {
        scanf("%d", &c);
        resp[i] = fibo(c);
    }
    printf("\n");
    for (int i = 0; i < k; i++) {
        printf("%lld\n", resp[i]);
    }
	return 0;
}
