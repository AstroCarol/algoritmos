//Faça um algoritmo que calcule as raízes reais de uma equação do segundo grau.

#include <stdio.h>
#include <math.h>

int delta(int a, int b, int c)
{
	int delta;
	double raiz;
	delta = (b * b) - (4 * a * c);
	raiz = sqrt(delta);
	if (raiz > 0)
	{
		return raiz;
	}
	else if (raiz == 0)
	{
		return raiz;
	}
}

int x1(int a, int b, int c)
{
	int x1;
	double raiz;
	raiz = delta(a,b,c);
	x1 = (-b + raiz) / 2 * a;
	return x1;
}

int x2(int a, int b, int c)
{
	int x2;
	double raiz;
	raiz = delta(a,b,c);
	x2 = (-b - raiz) / 2 * a;
	return x2;
}

int main(int argc, char const *argv[])
{
	int a, b, c;
	int v1, v2; 
	scanf("%d %d %d", &a, &b, &c);
	v1 = x1(a,b,c);
	v2 = x2(a,b,c);
	printf("X': %d\n", v1);
	printf("X'': %d\n", v2);
	return 0;
}
