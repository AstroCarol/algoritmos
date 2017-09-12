/*Um funcionário de uma empresa recebe aumento salarial anualmente. Sabe-se que:
a) esse funcionário foi contratado em 1995, com salário inicial de R$ 1.000,00
b) em 1996 recebeu aumento de 1,5% sobre seu salário inicial;
c) a partir de 1997 (inclusive), os aumentos salariais sempre correspondem ao dobro do percentual
do ano anterior.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int anoI, anoA;
	double aumento, salario;
	anoI = 1995;
	salario = 1000.00;
	aumento = 0.015;
	scanf("%d", &anoA);
	while(anoI < anoA)
	{
		salario += salario * aumento;
		anoI++;
		aumento *= 2;
	}
	printf("O salario atual eh: %.2f\n", salario);
	return 0;
}
