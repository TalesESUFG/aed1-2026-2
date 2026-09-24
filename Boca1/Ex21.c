#include <stdio.h>

const int cel[6] = {2,5,10,20,50,100};
int qc[6];
long int temp[5001][6]; // memoizacao pra diminuir o tempo seloco

long int banco(int x, int conta) {
	long int total = 0;
	if (x == 0) {
		return 1;
	}
	if (conta == 6 || x < 0) {
        return 0;
    }
    if (temp[x][conta] != -1) {
        return temp[x][conta];
    }
    int maximo = qc[conta];
    if (x / cel[conta] < maximo) {
        maximo = x / cel[conta];
    }
    for (int i = 0; i <= maximo; i++) {
        total += banco(x - i * cel[conta], conta + 1); //rec
    }
    return temp[x][conta] = total; 
}

int main() {
	int v;
	scanf("%d", &v);
	for (int i = 0; i < 6; i++) {
		int q;
		scanf("%d", &q);
		qc[i] = q;
	}
	for (int i = 0; i <= v; i++) {
        for (int y = 0; y < 6; y++) {
            temp[i][y] = -1;
        }
    }
    long int resp = banco(v, 0);
    printf("%ld\n", resp);
	return 0;
}
