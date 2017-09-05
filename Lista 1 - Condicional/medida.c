#include <stdio.h>

float polegadas(int m)
{
	float pol;
	pol = m * 25.4;
	return pol;
}

float milimetros(int p)
{
	float mil;
	mil = p / 25.4;
	return mil;
}

int main(int argc, char const *argv[])
{
	float m, p, pol, mil;
	char a;
	printf("Digite P para polegadas e M para milimetros\n");
	scanf("%c", &a);
	if (a == 'P' || a == 'p')
	{
		scanf("%f", &m);
		pol = polegadas(m);
		printf("%.2f\n", pol);
	}
	else if (a == 'M' || a == 'm')
	{
		scanf("%f", &p);
		mil = milimetros(p);
		printf("%.2f\n", mil);	
	}
	return 0;
}