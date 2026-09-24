#include <stdio.h>

double fatduplo(int x) {
    if (x <= 1) {
        return 1;
    }
    if (x % 2 == 0) {
        return fatduplo(x -1);
    }
    return x * fatduplo(x-2);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%.0f\n", fatduplo(n));
    return 0;
}
