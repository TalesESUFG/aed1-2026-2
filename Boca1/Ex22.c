#include <stdio.h>
#define MAX 50001

int familia(int parente[], int x) {
    if (parente[x] != x) {
        parente[x] = familia(parente, parente[x]);
    }
    return parente[x];
}

int main() {
    int parente[MAX];
    int achou[MAX];
    int n, m;
    int a, b, recua, recub;
    int contar;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        parente[i] = i;
    }
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        recua = familia(parente, a);
        recub = familia(parente, b);
        if (recua != recub) {
            parente[recua] = recub;
        }
    }
    for (int i = 1; i <= n; i++) {
        achou[i] = 0;
    }
    int z;
    contar = 0;
    for (int i = 1; i <= n; i++) {
        z = familia(parente, i);
        if (!achou[z]) {
            achou[z] = 1;
            contar++;
        }
    }
    printf("%d\n", contar); //odeio esse exercício
    return 0;
}
