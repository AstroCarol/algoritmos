/*Um asilo abriga 600 idosos carentes. Cada idoso possui uma ficha de identificação que armazena o
nome , a idade e a altura do idoso. Faça um algoritmo que a partir das informações contidas nas
fichas dos idosos, informa:
a. Qual o idoso mais alto, dizendo qual seu nome.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	float alt, auxalt;
	int id, auxid, i=0;
	char nome[100], auxn[100];
	while(i < 3)
	{
		scanf("%[^\n]s", nome);
		scanf("%d %f", &id, &alt);
		if (alt > auxalt)
		{
			auxalt = alt;
			auxid = id;
			strcpy(auxn, nome);
		}
	i++;
	}
	printf("Nome: %s\n", auxn);
	printf("Idade: %d\n", auxid);
	printf("Altura: %f\n", auxalt);
	return 0;
}