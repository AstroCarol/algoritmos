/*Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um triângulo e, se
forem, verificar se é um triângulo eqüilátero, isósceles ou escaleno. Se eles não formarem um triângulo,
escreva uma mensagem.*/

#include <stdio.h>

int triangulo(int a, int b, int c)
{
	int retorno;
	if ((a >= (b + c)) || (b >= (a + c)) || (c >= (a + b)))
	{
		retorno = 1;
		return retorno;
	}
	else if (a == b && a == c)
	{
		retorno = 1;
		return retorno;
	}
	else
	{
		retorno = 0;
		return retorno;
	}
}

int main(int argc, char *argv[])
{
	int a, b, c, t;
	scanf("%d %d %d", &a, &b, &c);
	t = triangulo(a,b,c);
	if(t == 1)
	{
		if (a != b && b != c)
		{
			printf("Triangulo escaleno");
		}
		else if (a == b && a == c)
		{
			printf("Triangulo equilatero\n");
		}
		else if (a == b || a == c || c == b)
		{
			printf("Triangulo isoceles\n");
		}
	}
	else
	{
		printf("Nao forma triangulo\n");
	}
	return 0;
}
