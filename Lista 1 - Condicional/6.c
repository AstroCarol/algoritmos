/*Faça um algoritmo que recebe três valores reais e verifica se estes podem corresponder aos lados de um
triângulo retângulo. A saída do algoritmo deve ser uma mensagem.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, c, hip, cat;
	scanf("%d %d %d", &a, &b, &c);
	hip = a * a;
	cat = (b * b) + (c * c);
	if (hip == cat)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
	return 0;
}
