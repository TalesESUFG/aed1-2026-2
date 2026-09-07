#include <stdio.h>

int main() {
	double m, a, t;
	scanf("%lf %lf %lf", &m, &a, &t);
	double vel = ((a*3.6)*t);
	double esp = (a*(t*t))/2;
	double tra = ((m*1000)*((vel/3.6)*(vel/3.6)))/2;
	printf("VELOCIDADE = %.2lf\nESPACO PERCORRIDO = %.2lf\nTRABALHO REALIZADO = %.2lf\n", vel, esp, tra);
	return 0;
}
