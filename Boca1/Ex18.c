#include <stdio.h>
#include <math.h> //usei para log e potencia

typedef long long int LLD;

LLD reverso(LLD n) {
    LLD t = (LLD) log10(n);
    if (n == 0) {
        return 0;
    }
    return ((n % 10 * pow(10, t)) + reverso(n/10));
}
int main() {
    LLD n;
    scanf("%lld", &n);
    printf("%d\n", reverso(n));
    return 0;
}
