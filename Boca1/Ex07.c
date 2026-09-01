#include <stdio.h>

int main() {
	int p, s;
	scanf("%d %d", &p,&s);
	int pedras[51] = {0};
	for (int i = 0; i < s; i++) {
		int i,d;
		scanf("%d %d", &i, &d);
		for (int ps = i; ps <= p; ps += d) {
			pedras[ps] = 1;
		}
		for (int ps = i; ps >= 1; ps -= d) {
			pedras[ps] = 1;
		}
	}
	for (int i = 1; i <= p; i++) {
		printf("%d\n", pedras[i]);
	}
	return 0;
}
