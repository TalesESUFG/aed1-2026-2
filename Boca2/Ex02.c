#include <stdio.h>

int main() {
	float salario, ckw;
	scanf("%f %f", &salario, &ckw);
	float pkw = (salario*0.7)/100;
	ckw *= pkw;
	float dkw = ckw*0.9;
	printf("Custo por kW : R$ %.2f\nCusto do consumo : R$ %.2f\nCusto com desconto : R$%.2f\n", pkw, ckw, dkw);
	return 0;
}
