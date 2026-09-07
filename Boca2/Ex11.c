#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double t = (a+b+c)/2;
	double res = t*(t - a)*(t - b)*(t - c);
	printf("A AREA DO TRIANGULO E = %.2lf", sqrt(res));
}
