#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, soma, produto;
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		soma = a + b;
		printf("A soma dos valores eh %d\n", soma);
	}
	else if(a <= b)
	{
		produto = a * b;
		printf("O produto dos valores eh %d\n", produto);
	}
	return 0;
}