/*Faça um programa que leia cinco pares de valores (a,b), todos inteiros e positivos, um de cada vez.
Mostre os números inteiros pares de a até b (inclusive).*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, aux=0;
	while(aux < 5)
	{
		scanf("%d %d", &a, &b);
		if(a < b)
		{
			while(a <= b)
			{
				if (a % 2 == 0)
				{
					printf("%d\n", a);
				}
				a++;
			}
		}
		else
		{
			printf("Nao ha pares\n");
		}
		aux++;
	}
	return 0;
}