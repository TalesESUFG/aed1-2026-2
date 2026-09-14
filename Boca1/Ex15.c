#include <stdio.h>

void rec(int x) {
	if (x == 0) return;
	rec(x -1);
	printf("%d ", x);
}

int main() {
	int x;
	scanf("%d", &x);
	rec(x);
	return 0;
}
