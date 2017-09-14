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
	while(i < 600)
	{
		printf("Digite o nome do %d idoso\n", i);
		scanf("%s", nome);
		printf("Digite a idade e a altura do idoso respectivamente\n");
		scanf("%d %f", &id, &alt);
		if (alt > auxalt)
		{
			auxalt = alt;
			auxid = id;
			strcpy(auxn, nome);
		}
	i++;
	}
	printf("Nome do idoso mais alto: %s\nIdade do idoso mais alto: %d\nAltura do idoso mais alto: %f\n", auxn, auxid, auxalt);
	return 0;
}
