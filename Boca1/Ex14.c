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

void fatores(LLI x) {
    for (LLI i = 2; i * i <= x; i++) {
        while (x % i == 0) {
            printf("%lld ", i);
            x /= i;
        }
    }
    if (x > 1) {
        printf("%lld ", x);
    }
}

int main() {
    int k,v;
    scanf("%d", &k);
    LLI lista[k];
    for (int i = 0; i < k; i++) {
        scanf("%d", &v);
        lista[i] = fibo(v);
    }
    printf("\n");
    for (int i = 0; i < k; i++) {
        fatores(lista[i]);
        printf("\n");
    }

    return 0;
}
