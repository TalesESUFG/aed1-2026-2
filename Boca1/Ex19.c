#include <stdio.h>

int bin(int x) {
    if (x == 0) {
        return 0;
    }
    return (x % 2) + 10 * bin(x / 2);//divide por dois pra ter a recu (chorei aqui eu tava colocando dois bin ;( )
}

int main() {
    int k, e;
    scanf("%d", &k);
    int resp[k];
    for (int i = 0; i < k; i++) {
        scanf("%d", &e);
        resp[i] = bin(e);
    }
    printf("\n");
    for (int i = 0; i < k; i++) {
        printf("%d\n", resp[i]);
    }
    return 0;
}
