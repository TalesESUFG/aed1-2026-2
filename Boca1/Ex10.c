#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main() {
	int n;
	scanf("%d", &n);
	double resp[n];
	for (int i = 0; i < n; i++) {
		char tipo;
		int xv, yv, zv;
		scanf(" %c", &tipo);
		if (tipo == 'C' || tipo == 'c') {
			scanf("%d", &xv);
			resp[i] = PI * (xv*xv);
		} else if (tipo == 'E' || tipo == 'e') {
			scanf("%d %d", &xv, &yv);
			resp[i] = PI * xv * yv;
		} else if (tipo == 'T' || tipo == 't') {
			scanf("%d %d %d", &xv, &yv, &zv);
			int p = (xv + yv + zv)/2;
			resp[i] = sqrt((p*(p-xv)*(p-yv)*(p-zv)));
		} else if (tipo == 'Z' || tipo == 'z') {
			scanf("%d %d %d", &xv, &yv, &zv);
			resp[i] = ((xv + yv) * zv)/2;
		} 
	}
	for (int i = 0; i < n; i++) {
		printf("%.0lf\n", resp[i]);
	}
}
