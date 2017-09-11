#include <stdio.h>

double media(double n1, double n2, double n3)
{
	double media;
	media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
	return media;
}

int main(int argc, char *argv[])
{
	double n1, n2, n3, m;
	printf("Digite a nota do trabalho de laboratorio:\n");
	scanf("%lf", &n1);
	printf("Digite a nota da avaliacao semestral\n");
	scanf("%lf", &n2);
	printf("Digite a nota do exame final\n");
	scanf("%lf", &n3);

	m = media(n1, n2, n3);
	if (m <= 10 && m >= 8)
	{
		printf("A\n");
	}
	else if (m < 8 && m >= 7)
	{
		printf("B\n");
	}
	else if (m < 7 && m >= 6)
	{
		printf("C\n");
	}
	else if (m < 6 && m >= 5)
	{
		printf("D\n");
	}
	else if (m < 5 && m >= 0)
	{
		printf("E\n");
	}
	return 0;
}