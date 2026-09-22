#include <stdio.h>

int main() {
	int m,n;
	scanf("%d %d", &m, &n);
	int m1[10][10], m2[10][10], mr[10][10] = {0};
	char op;
	for (int i = 0; i < m; i++) {
		for (int y = 0; y < n; y++) {
			scanf("%d", &m1[i][y]);	
		}
	}
	scanf(" %c", &op);
	for (int i = 0; i < m; i++) {
		for (int y = 0; y < n; y++) {
			scanf("%d", &m2[i][y]);
		}
	}
	printf("\n");
	if (op == '+') {
		for (int i = 0; i < m; i++) {
			for (int y = 0; y < n; y++) {
				mr[i][y] = m1[i][y] + m2[i][y];
			}
		}
	} else if (op == 'x') {
		if (m != n) {
			printf("ERROR");
			return 0;
		}
		for (int i = 0; i < m; i++) {
			for (int y = 0; y < n; y++) {
				mr[i][y] = 0;
				for (int k = 0; k < n; k++) {
					mr[i][y] += m1[i][k] * m2[k][y];
					if (mr [i][y] > 50) {
						printf("ERROR");
						return 0;
					}
				}
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int y = 0; y < n; y++) {
			printf("%d ", mr[i][y]);
		}
		printf("\n");
	}
	return 0;
}
