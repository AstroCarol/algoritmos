#include <stdio.h>

int main(int argc, char *argv[])
{
	int anoI, anoA;
	double aumento, salario;
	anoI = 1996;
	salario = 1000.00;
	aumento = 0.15;
	scanf("%d", &anoA);
	while(anoI < anoA)
	{
		salario += aumento * aumento;
		anoI++;
		aumento *= 2;
	}
	printf("O salario atual eh: %.2f\n", salario);
	return 0;
}