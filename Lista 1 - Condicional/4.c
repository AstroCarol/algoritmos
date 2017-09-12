/*Ler 2 valores. Se o primeiro valor lido for maior do que o segundo, então informar a soma dos dois 
valores. Mas, se o primeiro valor for menor ou igual ao segundo, então informar o produto desses 
números.*/

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
