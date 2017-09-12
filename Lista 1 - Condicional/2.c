//Seja X um número qualquer, elabore um algoritmo que diga se X é maior, igual ou menor a 200.

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;
	scanf("%d", &x);

	if (x > 200)
	{
		printf("%d eh maior que 200\n", x);
	}
	else if(x < 200)
	{
		printf("%d eh menor que 200\n", x);
	}
	else if(x == 200)
	{
		printf("%d eh igual a 200\n", x);
	}
	return 0;
}
