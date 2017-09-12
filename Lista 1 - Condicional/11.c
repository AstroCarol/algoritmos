/* Fazer um algoritmo para imprimir o conceito de um aluno, dada a sua nota. Supor notas inteiras somente.
O critério para conceitos é o seguinte:
 nota inferiores a 3 - conceito E
 nota de 3 a 5 - conceito D
 notas 6 e 7 - conceito C
 notas 8 e 9 - conceito B
nota 10 - conceito A*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n1;
	scanf("%d", &n1);
	if (n1 == 10)
	{
		printf("A\n");
	}
	else if (n1 == 9 || n1 == 8)
	{
		printf("B\n");
	}
	else if (n1 == 6 || n1 == 7)
	{
		printf("C\n");
	}
	else if (n1 == 5 || n1 == 4 || n1 == 3)
	{
		printf("D\n");
	}
	else if (n1 < 3)
	{
		printf("E\n");
	}
	return 0;
}
