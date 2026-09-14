#include <stdio.h>

int main() {
    int c;
    if (scanf("%d", &c) != 1) return 0;

    for (int i = 0; i < c; i++) {
        char x[45], y[45];
        scanf("%s %s", x, y);

        int tx = 0;
        while (x[tx] != '\0') {
            tx++;
        }

        int ty = 0;
        while (y[ty] != '\0') {
            ty++;
        }

        if ((tx == 1 && x[0] == '0') || (ty == 1 && y[0] == '0')) {
            printf("0\n");
            continue;
        }

        int max = tx + ty;
        int buffer[90];
        for (int z = 0; z < max; z++) {
            buffer[z] = 0;
        }

        for (int z = tx - 1; z >= 0; z--) {
            for (int j = ty - 1; j >= 0; j--) {
                int xd = x[z] - '0';
                int yd = y[j] - '0';
                int p1 = z + j;
                int p2 = z + j + 1;
                int soma = (xd * yd) + buffer[p2];
                buffer[p2] = soma % 10;
                buffer[p1] += soma / 10;
            }
        }

        int zeros = 0;
        while (zeros < max && buffer[zeros] == 0) {
            zeros++;
        }

        if (zeros == max) {
            printf("0");
        } else {
            for (int k = zeros; k < max; k++) {
                printf("%d", buffer[k]);
            }
        }
        printf("\n");
    }
    return 0;
}
