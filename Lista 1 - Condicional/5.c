/*Dadas 3 notas de uma aluno, calcular sua média e seu conceito, de acordo com a seguinte conversão:
A: Média >= 9,0
B: 9,0 > Média >= 7,5
C: 7,5 > Média >= 6,0
D: Média < 6,0*/

#include <stdio.h>

double media(double n1, double n2, double n3)
{
	double media = (n1 + n2 + n3) / 3;
	return media;
}

int main(int argc, char const *argv[])
{
	double n1, n2, n3, m;
	scanf("%lf %lf %lf", &n1, &n2, &n3);
	m = media(n1, n2, n3);
	if (m >= 9.0)
	{
		printf("A: %2.f\n", m);
	}
	else if (m < 9.0 && m >= 7.5)
	{
		printf("B: %2.f\n", m);
	}
	else if (m > 7.5 && m >= 6.0)
	{
		printf("C: %2.f\n", m);
	}
	else if (m < 6.0)
	{
		printf("D: %2.f\n", m);
	}
	return 0;
}
